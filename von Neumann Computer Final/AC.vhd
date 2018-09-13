library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity AC is
	PORT(data_in : IN std_logic_vector(7 downto 0);           --register input pins
	load, clk : IN std_logic;											 --load(set value on res) & clk(clock pulse)
	data_out : OUT std_logic_vector(7 downto 0));             --register output pins
end AC;

architecture Procedural of AC is

begin
	PROCESS (clk)                                             --sensitive by clock
	begin 
		if clk = '1' AND clk'EVENT then                        --rising edge
			if load = '1' then 
				data_out <= data_in;
			end if;
		end if;
	end process;
end Procedural;

