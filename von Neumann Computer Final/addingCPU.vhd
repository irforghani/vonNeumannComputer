library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity addingCPU is
	PORT(reset, clk : IN std_logic;                            --reset & clock pulse pin
		  adr_bus : OUT std_logic_vector(5 downto 0);           --address bus
		  rd_mem, wr_mem : OUT std_logic;                       --read and write memory enable
		  --data_bus_in : IN std_logic_vector(7 downto 0)
		  data_bus_in : IN std_logic_vector(7 downto 0);
		  data_bus_out : OUT std_logic_vector(7 downto 0));       --data bus
end addingCPU;

architecture Structural of addingCPU is                       --product structural discription level
	signal ir_on_adr, pc_on_adr, dbus_on_data : std_logic;     --transfer operations
	signal data_on_dbus, ld_ir, ld_ac, ld_pc : std_logic;		  --register load pins
	signal inc_pc, clr_pc : std_logic;                         --increment & clear pc pin
	signal pass, add, alu_on_dbus : std_logic;					  --transport(star) operation 
	signal op_code : std_logic_vector(1 downto 0);             --op code
begin
	CU : Entity WORK.controller                                --instansiate controller module
		  PORT MAP (reset, clk, op_code, rd_mem,					  --port mapping
					   wr_mem, ir_on_adr, pc_on_adr,
						dbus_on_data, data_on_dbus, 
						ld_ir, ld_ac, ld_pc, inc_pc,
						clr_pc, pass, add, alu_on_dbus);
	DP : Entity WORK.datapath                                  --instansiate datapath module 
		  PORT MAP (ir_on_adr, pc_on_adr, dbus_on_data,         --port mapping
						data_on_dbus, ld_ir, ld_ac, ld_pc,
						inc_pc, clr_pc, pass, add, 
						alu_on_dbus, clk, adr_bus, op_code, 
						data_bus_in, data_bus_out);
end Structural;

