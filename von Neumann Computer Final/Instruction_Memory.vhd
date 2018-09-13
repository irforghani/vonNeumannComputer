
Library IEEE;
Library WORK;
use STD.TEXTIO.ALL;
use IEEE.std_logic_textio.ALL;
library ieee;
use ieee.std_logic_1164.ALL;
use IEEE.STD_LOGIC_1164.ALL;
use WORK.utilities1.ALL;                                            


entity Instruction_Memory is
	PORT(address : IN std_logic_vector(5 downto 0);
		  dataout : OUT std_logic_vector(7 downto 0);
		  rm : IN std_logic);
end Instruction_Memory;

architecture Behavioral of Instruction_Memory is
	signal clk: std_logic;
	TYPE memory IS                                                     --memory type definition
		ARRAY (0 to 63) of std_logic_vector(7 downto 0);
	SHARED Variable mem : memory := (OTHERS => (OTHERS => '0')); 
	FILE InstFile : TEXT;
begin
	t: process(clk)
	Variable l1 : LINE;
	variable count : INTEGER := 0;
	Variable temp: std_logic_vector(7 downto 0);
	begin
		FILE_OPEN(InstFile, "InstructionFile.mem", READ_MODE);
		WHILE NOT ENDFILE (InstFile) loop                               --assemble
			READLINE(InstFile, l1);
			HREAD(l1, temp);
			mem(count) := temp;
			count := count + 1;
			if count = int(address) then
				dataout <= temp;
			end if;
		end loop;
		FILE_CLOSE(InstFile);
	
	end process t;
	--dataout <= mem(int(address));
	
end Behavioral;

