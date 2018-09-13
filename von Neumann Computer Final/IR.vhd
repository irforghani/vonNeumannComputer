library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity IR is
PORT(data_in: IN std_logic_vector(7 downto 0);          --register input pins
	  load, clk : IN std_logic;                          --load (fit input on value) & clk(clock puls pin)
	  data_out : OUT std_logic_vector(7 downto 0));      --register output pins
end IR;

architecture Procedural of IR is                  --product by procedure discription level
begin
	PROCESS (clk)   --sensitive on clock puls event 
	begin
		if clk = '1' AND clk'EVENT then  --rising edge 
			if load = '1' then 
				data_out <= data_in;       
			end if;
		end if;
	end process;
end Procedural;

