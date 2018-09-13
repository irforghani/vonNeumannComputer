Library IEEE;
Library WORK;
use STD.TEXTIO.ALL;
use IEEE.std_logic_textio.ALL;
use IEEE.STD_LOGIC_1164.ALL;
use WORK.utilities1.ALL;                                              --library with bin and int converter function

Entity Test_AddingCPU IS END Entity;

architecture file_oriented of Test_AddingCPU IS                       --product file oriented discription level
	signal reset : std_logic := '1';                                   --reset pin
	signal clk, control : std_logic := '0';                            --clock & control pin
	signal adr_bus : std_logic_vector(5 downto 0);                     --address bus
	signal rd_mem, wr_mem : std_logic;											 --read & write memory enable
	signal data_bus : std_logic_vector(7 downto 0);							 --data bus
	signal mem_data : std_logic_vector(7 downto 0) := (OTHERS => '0'); --data of memory
	
	TYPE memory IS                                                     --memory type definition
		ARRAY (0 to 63) of std_logic_vector(7 downto 0);
	SHARED Variable mem : memory := (OTHERS => (OTHERS => '0'));       --mempry instansiation
	FILE InstFile, HexFile : TEXT;                                     --instruction file & hex file
	PROCEDURE convert IS																 --assembler
		Variable l1 : LINE;
		Variable inst : string(1 to 2) := "00";
		Variable opCode : string(1 to 5);
		Variable data, writedata, addr : std_logic_vector(7 downto 0);
		Variable JustData : std_logic;
	begin
		FILE_OPEN(InstFile, "InstructionFile.mem", READ_MODE);			 --open files
		FILE_OPEN(HexFile, "HexadecimalFile.mem", WRITE_MODE);
		
		WHILE NOT ENDFILE (InstFile) loop                               --assemble
			READLINE(InstFile, l1);
			HREAD(l1, addr);
			READ(l1, opCode);
			JustData := '0';
			CASE opCode IS
				WHEN " lda " =>
					writeData(7 downto 6) := "00";
				WHEN " sta " =>
					writeData(7 downto 6) := "01";
				WHEN " jmp " =>
					writeData(7 downto 6) := "10";
				WHEN " add " =>
					writeData(7 downto 6) := "11";
				WHEN " ::: " =>
					JustData := '1';
					HREAD(l1, writeData);
				WHEN OTHERS =>
				   JustData := '1';
					HREAD(l1, writeData);
			end CASE;
			if JustData = '0' then
				HREAD(l1, data);
				writeData(5 downto 0) := data(5 downto 0);
			end if;
			
			mem(int(addr)) := writeData;                                    --write out in file
		end loop;
		FILE_CLOSE(InstFile);                                              --close files
		FILE_CLOSE(HexFile);
	end procedure;
begin
	UUT : Entity WORK.AddingCPU(Structural)                               --CPU specification
			PORT MAP(reset, clk, adr_bus, rd_mem, wr_mem, data_bus); 

	clk <= NOT clk after 10 ns when NOW < 430 ns else '0';                --generate clock pulse
	FileInit : PROCESS                                                    --initialize file process
		Variable l1 : LINE;
	begin
		convert;                                                           --call convert procedure
		wait for 25 ns;
		reset <= '0';
		wait for 405 ns;
		FILE_OPEN(HexFile, "HexadecimalFile.mem", WRITE_MODE);             --open hex file
		for i in 0 to 63 loop                                              --write output in file
			HWRITE(l1, mem(i));
			WRITELINE(HexFile, l1);
		end loop;
		FILE_CLOSE(HexFile);                                               --close hex file
		wait;
	end process;
	MemReadWrite : PROCESS                                               --memory read & write process
	begin
		wait until clk = '1' AND clk'EVENT;                               --rising edge
		control <= '0';
		wait for 1 ns;
		if rd_mem = '1' then
			wait for 1 ns;
			mem_data <= mem(int(adr_bus));											--read memory
			control <= '1';
		end if;
		if wr_mem = '1' then
			wait for 1 ns;
			mem(int(adr_bus)) := data_bus;                                 --write memory
		end if;
	end process;
	data_bus <= mem_data when control = '1' else (OTHERS => 'Z');        --update data bus
end architecture;
