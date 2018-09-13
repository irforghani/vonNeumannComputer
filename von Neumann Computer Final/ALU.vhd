library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library WORK;
use WORK.utilities1.ALL;                                       --library with bin and int converter function 

entity ALU is
	PORT(a, b : IN std_logic_vector(7 downto 0);                --alu input pins
	pass, add : IN std_logic;												--transport(star) alu operation pin & add(alu add operation)
	alu_out : OUT std_logic_vector(7 downto 0));						--alu output pins
end ALU;		

architecture Functional of ALU is                              --product functional discription level
	signal alu_res : std_logic_vector(7 downto 0);					--lacth alu data
begin
	PROCESS (a, b, pass, add) begin                             --sensitive by a, b, pass, add
		if pass = '1' then
			alu_res <= a;
		elsif add = '1' then
			alu_res <= bin( int(a) + int(b) , alu_res'LENGTH);
		else 
			alu_res <= (OTHERS => '0');
		end if;
	end process;
	alu_out <= alu_res;                                         --mapping alu result on output
end Functional;

