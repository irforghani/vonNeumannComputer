--
--	Package File Template
--
--	Purpose: This package defines supplemental types, subtypes, 
--		 constants, and functions 
--
--   To use any of the example code shown below, uncomment the lines and modify as necessary
--

library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.STD_LOGIC_TEXTIO.all;

package utilities1 is
	FUNCTION int(invec : std_logic_vector) return integer;
	FUNCTION bin(inint, size : integer) return std_logic_vector;
end utilities1;

package body utilities1 is

	

	FUNCTION int(invec : std_logic_vector) return integer is
		variable tmp : integer := 0;
	begin
		for i in invec'LENGTH - 1 downto 0 loop 
			if invec(i) = '1' then
				tmp := tmp + 2**i;
			end if;
		end loop;
		return tmp;
	end FUNCTION int;
	FUNCTION bin(inint, size : integer) return std_logic_vector is
		variable tmpi : integer := inint;
		variable tmpb : std_logic_vector(size - 1 downto 0);
	begin
		tmpb := (OTHERS => '0');
		for i in 0 to size - 1 loop 
			if ((tmpi MOD 2) = 1) then
				tmpb(i) := '1';
			end if;
			tmpi := tmpi / 2;
		end loop;
		return tmpb;
	end FUNCTION bin;
	

end utilities1;
