library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
Library WORK;
use WORK.utilities1.ALL;                                      --library with bin and int converter function 

entity controller is
	PORT(rst , clk : IN std_logic;                             --reset and clock pulse pin
		  op_code : IN std_logic_vector(1 downto 0);            --op code (operation selector)
		  rd_mem, wr_mem : OUT std_logic;							  --memory read and write enable
		  ir_on_adr, pc_on_adr : OUT std_logic;					  --transfer ir & pc on address bus
		  dbus_on_data, data_on_dbus, ld_ir : OUT std_logic;    --transfer(load & store) on or from data bus & load ir pin
		  ld_ac, ld_pc, inc_pc, clr_pc, pass : OUT std_logic;   --register load pins & pc increment and clear pin & transport operation
		  add, alu_on_dbus : OUT std_logic);                    --alu add operation pin & transfer alu output on dbus
end controller;

architecture Procedural of controller is							  --product procedural discription level
	TYPE state IS (Reset, Fetch, Decode, Execute);             --declare type of state 
	signal present_state, next_state : state;                  --|Reset| --> |Fetch| --> |Decode| --> |Execute|
begin																			  --present_state : visited state & next_state in FSM
	PROCESS (clk) --sequential        --visitor process        --sensitive by clock pulse
	begin
		if clk = '1' AND clk'EVENT then                         --rising edge
			if rst = '1' then												  
				present_state <= Reset;
			else 
				present_state <= next_state;
			end if;
		end if;
	end process;
	--
	PROCESS (present_state, rst) --combinational               --FSM Tracker
	begin
	rd_mem <= '0';                                             --refreshing all pins to default value
	wr_mem <= '0';
	ir_on_adr <= '0';
	pc_on_adr <= '0';
	dbus_on_data <= '0';
	data_on_dbus <= '0';
	ld_ir <= '0';
	inc_pc <= '0';
	clr_pc <= '0';
	add <= '0';
	alu_on_dbus <= '0';
	CASE present_state IS
		WHEN Reset =>                                          --Reset State track decide
			if rst = '1' then 
				next_state <= Reset;
			else
				next_state <= Fetch;
			end if;
			clr_pc <= '1';
		WHEN Fetch =>                                          --Fetch State track decide
			next_state <= Decode;
			pc_on_adr <= '1';
			rd_mem <= '1';
			data_on_dbus <= '1';
			ld_ir <= '1';
			inc_pc <= '1';
		WHEN Decode =>														 --Decode State track decide
			next_state <= Execute;
		WHEN Execute =>                                        --Execute State track decide
			next_state <= Fetch;
			CASE op_code IS                                     --Decoding Session
				WHEN "00" =>                                     --load instruction
					ir_on_adr <= '1'; 
					rd_mem <= '1';
					data_on_dbus <= '1';
					ld_ac <= '1';
				WHEN "01" =>												 --store instruction
					dbus_on_data <= '1';
					alu_on_dbus <= '1';
					pass <= '1';
					wr_mem <= '1';
					ir_on_adr <= '1'; 
				WHEN "10" =>                                     --jump(branch Unconditionaly) instruction
					ld_pc <= '1';
				WHEN "11" =>												 --add instruction
					add <= '1';
					alu_on_dbus <= '1';
					ld_ac <= '1';
				WHEN OTHERS =>                                   --initialize
					rd_mem <= '0';
					pc_on_adr <= '0';
					pass <= '0';
					ir_on_adr <= '0';
					wr_mem <= '0';
					ld_ac <= '0';
					dbus_on_data <= '0';
					data_on_dbus <= '0';
					ld_ir <= '0';
					alu_on_dbus <= '0';
					add <= '0';
					inc_pc <= '0';
					clr_pc <= '0';
					ld_pc <= '0';
			end CASE;
		WHEN OTHERS => next_state <= Reset;
		end CASE;	
	end process;
end Procedural;

