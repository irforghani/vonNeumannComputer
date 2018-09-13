----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:52:38 01/24/2018 
-- Design Name: 
-- Module Name:    veNeumannComputer - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity veNeumannComputer is
	PORT(clk, reset : IN std_logic);
end veNeumannComputer;

architecture Behavioral of veNeumannComputer is
	signal address : std_logic_vector(5 downto 0):= (OTHERS => '0');
	signal data_in, data_out : std_logic_vector(7 downto 0) := (OTHERS => '0');
	signal rm, wm : std_logic := '0';
begin
	CPU : Entity work.addingCPU
			PORT MAP (reset, clk, address, rm, wm, data_in, data_out);
	RAM : Entity work.Instruction_Memory
			PORT MAP (address, data_in, rm);

end Behavioral;

