library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity datapath is
	PORT(ir_on_adr, pc_on_adr, dbus_on_data : IN std_logic;                  --control trasfer data on data bus & address bus
		  data_on_dbus, ld_ir, ld_ac, ld_pc : IN std_logic;						 --load pin control in cpu registers
		  inc_pc, clr_pc, pass, add, alu_on_dbus, clk : IN std_logic;	       --program counter and alu output control
		  adr_bus : OUT std_logic_vector(5 downto 0);								 --address bus
		  op_code : OUT std_logic_vector(1 downto 0);								 --op code(select execute operation)
		  data_bus_in: IN std_logic_vector(7 downto 0);
		  data_bus_out: OUT std_logic_vector(7 downto 0));                      --data busq
end datapath;

architecture structural of datapath is	                                     --product structural discription level
	signal dbus, ir_out, a_side : std_logic_vector(7 downto 0);              --data bus & ir register output & a alu input
	signal alu_out, b_side : std_logic_vector(7 downto 0);                   --alu output & b alu input
	signal pc_out : std_logic_vector(5 downto 0);									 --program counter register output
begin
	IR : Entity WORK.IR(Procedural)                                          --connect instruction register to datapath
		  PORT MAP (dbus, ld_ir, clk, ir_out);
	PC : Entity WORK.PC(Procedural)														 --connect program counter register to datapath
		  PORT MAP(ir_out(5 downto 0), ld_pc, inc_pc, clr_pc, clk, pc_out);
	AC : Entity WORK.AC(Procedural)                                          --connect accumulator register to datapath
		  PORT MAP(dbus, ld_ac, clk, a_side);
	ALU: Entity WORK.ALU(Functional)                                         --connect ALU to datapath
		  PORT MAP(a_side, b_side, pass, add, alu_out);
	b_side <= '0'&'0'&ir_out(5 downto 0);                                    --initialize b_side
	
	adr_bus <= ir_out(5 downto 0) when ir_on_adr = '1' else                  --transfer ir on address bus
		(OTHERS => 'Z');
	adr_bus <= pc_out when pc_on_adr = '1' else                              --transfer pc on address bus
		(OTHERS => 'Z');
	dbus <= alu_out when alu_on_dbus = '1' else 										 --transfer alu output on data bus
		(OTHERS => 'Z');
	data_bus_out <= dbus when dbus_on_data = '1' else  									 --transfer(store) new value on data bus
		(OTHERS => 'Z');
	dbus <= data_bus_in when data_on_dbus = '1' else                            --transfer(load) new valur from dbus
		(OTHERS => 'Z');
	op_code <= ir_out(7 downto 6);    	--set op code
end structural;

