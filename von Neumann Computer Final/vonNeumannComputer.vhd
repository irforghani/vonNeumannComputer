Library IEEE;
Library WORK;
use STD.TEXTIO.ALL;
use IEEE.std_logic_textio.ALL;
use IEEE.STD_LOGIC_1164.ALL;
use WORK.utilities1.ALL;


entity vonNeumannComputer is
	PORT(clk, reset: IN std_logic);
end vonNeumannComputer;

architecture Behavioral of vonNeumannComputer is
	signal address : std_logic_vector(5 downto 0);
	signal data : std_logic_vector(7 downto 0);
	signal rm : std_logic;
	signal wm : std_logic;
	signal address2 : std_logic_vector(5 downto 0);
	signal data2 : std_logic_vector(7 downto 0);
	signal rm2 : std_logic;
	signal wm2 : std_logic;

begin
	
	CPU : Entity WORK.addingCPU
			PORT MAP( reset, clk, address, rm , wm, data);
	RAM : Entity WORK.Instruction_Memory
			PORT MAP ( address2, data2, rm2);

end Behavioral;

