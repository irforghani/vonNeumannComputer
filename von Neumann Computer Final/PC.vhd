library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library WORK;
use WORK.utilities1.ALL;   --library with bin and int converter function 

entity PC is
	PORT(data_in : std_logic_vector(5 downto 0);                  --register input pins
		  load, inc, clr, clk : std_logic;						        --load(set input on result) & inc(increment register value) & clr(clear register value) & clk(clock pulse)
		  data_out : OUT std_logic_vector(5 downto 0));            --register output pins
end PC;

architecture Procedural of PC is                                 --product procedural discription level

signal pc : std_logic_vector(5 downto 0);                        --latch register data by temp signal
begin	
	PROCESS (clk) 																  --sensitive by clock pulse
	begin 
		if clk = '1' AND clk'EVENT then 	 								  --rising edge
			if clr = '1' then 												  --clear
				pc <= (OTHERS => '0');
			elsif load = '1' then 											  --load
				pc <= data_in;
			elsif inc = '1' then                                    --increment
				pc <= bin(int(pc) + 1, 6);
			end if;
		end if;
	end process;	
	data_out <= pc;                                               --mapping register value on output
end Procedural;

