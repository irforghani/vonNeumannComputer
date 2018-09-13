--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____
--  /   /\/   /
-- /___/  \  /    Vendor: Xilinx
-- \   \   \/     Version: P.20131013
--  \   \         Application: netgen
--  /   /         Filename: addingCPU_synthesis.vhd
-- /___/   /\     Timestamp: Wed Jan 24 10:12:31 2018
-- \   \  /  \ 
--  \___\/\___\
--             
-- Command	: -intstyle ise -ar Structure -tm addingCPU -w -dir netgen/synthesis -ofmt vhdl -sim addingCPU.ngc addingCPU_synthesis.vhd 
-- Device	: xc3s50-4-pq208
-- Input file	: addingCPU.ngc
-- Output file	: E:\Academic\VHDL projects\basic_CPU\netgen\synthesis\addingCPU_synthesis.vhd
-- # of Entities	: 1
-- Design Name	: addingCPU
-- Xilinx	: C:\Xilinx\14.7\ISE_DS\ISE\
--             
-- Purpose:    
--     This VHDL netlist is a verification model and uses simulation 
--     primitives which may not represent the true implementation of the 
--     device, however the netlist is functionally correct and should not 
--     be modified. This file cannot be synthesized and should only be used 
--     with supported simulation tools.
--             
-- Reference:  
--     Command Line Tools User Guide, Chapter 23
--     Synthesis and Simulation Design Guide, Chapter 6
--             
--------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
use UNISIM.VPKG.ALL;

entity addingCPU is
  port (
    clk : in STD_LOGIC := 'X'; 
    reset : in STD_LOGIC := 'X'; 
    rd_mem : out STD_LOGIC; 
    wr_mem : out STD_LOGIC; 
    data_bus : inout STD_LOGIC_VECTOR ( 7 downto 0 ); 
    adr_bus : out STD_LOGIC_VECTOR ( 5 downto 0 ) 
  );
end addingCPU;

architecture Structure of addingCPU is
  signal CU_present_state_FSM_FFd1_0 : STD_LOGIC; 
  signal CU_present_state_FSM_FFd2_1 : STD_LOGIC; 
  signal CU_present_state_FSM_FFd3_2 : STD_LOGIC; 
  signal CU_present_state_FSM_FFd4_3 : STD_LOGIC; 
  signal DP_PC_pc_not0001 : STD_LOGIC; 
  signal DP_dbus_on_data_inv : STD_LOGIC; 
  signal N0 : STD_LOGIC; 
  signal N11 : STD_LOGIC; 
  signal N18 : STD_LOGIC; 
  signal N2 : STD_LOGIC; 
  signal N3 : STD_LOGIC; 
  signal N4 : STD_LOGIC; 
  signal N5 : STD_LOGIC; 
  signal N6 : STD_LOGIC; 
  signal N7 : STD_LOGIC; 
  signal N8 : STD_LOGIC; 
  signal N9 : STD_LOGIC; 
  signal adr_bus_0_MLTSRCEDGE : STD_LOGIC; 
  signal adr_bus_1_MLTSRCEDGE : STD_LOGIC; 
  signal adr_bus_2_MLTSRCEDGE : STD_LOGIC; 
  signal adr_bus_3_MLTSRCEDGE : STD_LOGIC; 
  signal adr_bus_4_MLTSRCEDGE : STD_LOGIC; 
  signal adr_bus_5_MLTSRCEDGE : STD_LOGIC; 
  signal alu_on_dbus : STD_LOGIC; 
  signal clk_BUFGP_61 : STD_LOGIC; 
  signal data_on_dbus : STD_LOGIC; 
  signal dbus_on_data : STD_LOGIC; 
  signal ir_on_adr : STD_LOGIC; 
  signal reset_IBUF_75 : STD_LOGIC; 
  signal DP_AC_data_out : STD_LOGIC_VECTOR ( 7 downto 0 ); 
  signal DP_IR_data_out : STD_LOGIC_VECTOR ( 7 downto 0 ); 
  signal DP_PC_pc : STD_LOGIC_VECTOR ( 5 downto 0 ); 
  signal DP_dbus : STD_LOGIC_VECTOR ( 7 downto 0 ); 
begin
  XST_GND : GND
    port map (
      G => N0
    );
  XST_VCC : VCC
    port map (
      P => DP_PC_pc_not0001
    );
  CU_present_state_FSM_FFd1 : FDR
    generic map(
      INIT => '0'
    )
    port map (
      C => clk_BUFGP_61,
      D => CU_present_state_FSM_FFd2_1,
      R => reset_IBUF_75,
      Q => CU_present_state_FSM_FFd1_0
    );
  CU_present_state_FSM_FFd2 : FDR
    generic map(
      INIT => '0'
    )
    port map (
      C => clk_BUFGP_61,
      D => CU_present_state_FSM_FFd3_2,
      R => reset_IBUF_75,
      Q => CU_present_state_FSM_FFd2_1
    );
  CU_present_state_FSM_FFd4 : FDS
    generic map(
      INIT => '1'
    )
    port map (
      C => clk_BUFGP_61,
      D => N0,
      S => reset_IBUF_75,
      Q => CU_present_state_FSM_FFd4_3
    );
  DP_IR_data_out_7 : FDE
    port map (
      C => clk_BUFGP_61,
      CE => CU_present_state_FSM_FFd3_2,
      D => DP_dbus(7),
      Q => DP_IR_data_out(7)
    );
  DP_IR_data_out_6 : FDE
    port map (
      C => clk_BUFGP_61,
      CE => CU_present_state_FSM_FFd3_2,
      D => DP_dbus(6),
      Q => DP_IR_data_out(6)
    );
  DP_IR_data_out_5 : FDE
    port map (
      C => clk_BUFGP_61,
      CE => CU_present_state_FSM_FFd3_2,
      D => DP_dbus(5),
      Q => DP_IR_data_out(5)
    );
  DP_IR_data_out_4 : FDE
    port map (
      C => clk_BUFGP_61,
      CE => CU_present_state_FSM_FFd3_2,
      D => DP_dbus(4),
      Q => DP_IR_data_out(4)
    );
  DP_IR_data_out_3 : FDE
    port map (
      C => clk_BUFGP_61,
      CE => CU_present_state_FSM_FFd3_2,
      D => DP_dbus(3),
      Q => DP_IR_data_out(3)
    );
  DP_IR_data_out_2 : FDE
    port map (
      C => clk_BUFGP_61,
      CE => CU_present_state_FSM_FFd3_2,
      D => DP_dbus(2),
      Q => DP_IR_data_out(2)
    );
  DP_IR_data_out_1 : FDE
    port map (
      C => clk_BUFGP_61,
      CE => CU_present_state_FSM_FFd3_2,
      D => DP_dbus(1),
      Q => DP_IR_data_out(1)
    );
  DP_IR_data_out_0 : FDE
    port map (
      C => clk_BUFGP_61,
      CE => CU_present_state_FSM_FFd3_2,
      D => DP_dbus(0),
      Q => DP_IR_data_out(0)
    );
  DP_PC_pc_5 : FDRE
    port map (
      C => clk_BUFGP_61,
      CE => DP_PC_pc_not0001,
      D => DP_IR_data_out(5),
      R => CU_present_state_FSM_FFd4_3,
      Q => DP_PC_pc(5)
    );
  DP_PC_pc_4 : FDRE
    port map (
      C => clk_BUFGP_61,
      CE => DP_PC_pc_not0001,
      D => DP_IR_data_out(4),
      R => CU_present_state_FSM_FFd4_3,
      Q => DP_PC_pc(4)
    );
  DP_PC_pc_3 : FDRE
    port map (
      C => clk_BUFGP_61,
      CE => DP_PC_pc_not0001,
      D => DP_IR_data_out(3),
      R => CU_present_state_FSM_FFd4_3,
      Q => DP_PC_pc(3)
    );
  DP_PC_pc_2 : FDRE
    port map (
      C => clk_BUFGP_61,
      CE => DP_PC_pc_not0001,
      D => DP_IR_data_out(2),
      R => CU_present_state_FSM_FFd4_3,
      Q => DP_PC_pc(2)
    );
  DP_PC_pc_1 : FDRE
    port map (
      C => clk_BUFGP_61,
      CE => DP_PC_pc_not0001,
      D => DP_IR_data_out(1),
      R => CU_present_state_FSM_FFd4_3,
      Q => DP_PC_pc(1)
    );
  DP_PC_pc_0 : FDRE
    port map (
      C => clk_BUFGP_61,
      CE => DP_PC_pc_not0001,
      D => DP_IR_data_out(0),
      R => CU_present_state_FSM_FFd4_3,
      Q => DP_PC_pc(0)
    );
  DP_AC_data_out_7 : FDE
    port map (
      C => clk_BUFGP_61,
      CE => DP_PC_pc_not0001,
      D => DP_dbus(7),
      Q => DP_AC_data_out(7)
    );
  DP_AC_data_out_6 : FDE
    port map (
      C => clk_BUFGP_61,
      CE => DP_PC_pc_not0001,
      D => DP_dbus(6),
      Q => DP_AC_data_out(6)
    );
  DP_AC_data_out_5 : FDE
    port map (
      C => clk_BUFGP_61,
      CE => DP_PC_pc_not0001,
      D => DP_dbus(5),
      Q => DP_AC_data_out(5)
    );
  DP_AC_data_out_4 : FDE
    port map (
      C => clk_BUFGP_61,
      CE => DP_PC_pc_not0001,
      D => DP_dbus(4),
      Q => DP_AC_data_out(4)
    );
  DP_AC_data_out_3 : FDE
    port map (
      C => clk_BUFGP_61,
      CE => DP_PC_pc_not0001,
      D => DP_dbus(3),
      Q => DP_AC_data_out(3)
    );
  DP_AC_data_out_2 : FDE
    port map (
      C => clk_BUFGP_61,
      CE => DP_PC_pc_not0001,
      D => DP_dbus(2),
      Q => DP_AC_data_out(2)
    );
  DP_AC_data_out_1 : FDE
    port map (
      C => clk_BUFGP_61,
      CE => DP_PC_pc_not0001,
      D => DP_dbus(1),
      Q => DP_AC_data_out(1)
    );
  DP_AC_data_out_0 : FDE
    port map (
      C => clk_BUFGP_61,
      CE => DP_PC_pc_not0001,
      D => DP_dbus(0),
      Q => DP_AC_data_out(0)
    );
  CU_ir_on_adr1 : LUT2
    generic map(
      INIT => X"2"
    )
    port map (
      I0 => CU_present_state_FSM_FFd1_0,
      I1 => DP_IR_data_out(7),
      O => ir_on_adr
    );
  CU_wr_mem1 : LUT3
    generic map(
      INIT => X"08"
    )
    port map (
      I0 => CU_present_state_FSM_FFd1_0,
      I1 => DP_IR_data_out(6),
      I2 => DP_IR_data_out(7),
      O => dbus_on_data
    );
  adr_bus_5_MLTSRCEDGELogicTrst1 : LUT4
    generic map(
      INIT => X"FBD1"
    )
    port map (
      I0 => CU_present_state_FSM_FFd3_2,
      I1 => ir_on_adr,
      I2 => DP_IR_data_out(5),
      I3 => DP_PC_pc(5),
      O => adr_bus_5_MLTSRCEDGE
    );
  adr_bus_4_MLTSRCEDGELogicTrst1 : LUT4
    generic map(
      INIT => X"FBD1"
    )
    port map (
      I0 => CU_present_state_FSM_FFd3_2,
      I1 => ir_on_adr,
      I2 => DP_IR_data_out(4),
      I3 => DP_PC_pc(4),
      O => adr_bus_4_MLTSRCEDGE
    );
  adr_bus_3_MLTSRCEDGELogicTrst1 : LUT4
    generic map(
      INIT => X"FBD1"
    )
    port map (
      I0 => CU_present_state_FSM_FFd3_2,
      I1 => ir_on_adr,
      I2 => DP_IR_data_out(3),
      I3 => DP_PC_pc(3),
      O => adr_bus_3_MLTSRCEDGE
    );
  adr_bus_2_MLTSRCEDGELogicTrst1 : LUT4
    generic map(
      INIT => X"FBD1"
    )
    port map (
      I0 => CU_present_state_FSM_FFd3_2,
      I1 => ir_on_adr,
      I2 => DP_IR_data_out(2),
      I3 => DP_PC_pc(2),
      O => adr_bus_2_MLTSRCEDGE
    );
  adr_bus_1_MLTSRCEDGELogicTrst1 : LUT4
    generic map(
      INIT => X"FBD1"
    )
    port map (
      I0 => CU_present_state_FSM_FFd3_2,
      I1 => ir_on_adr,
      I2 => DP_IR_data_out(1),
      I3 => DP_PC_pc(1),
      O => adr_bus_1_MLTSRCEDGE
    );
  adr_bus_0_MLTSRCEDGELogicTrst1 : LUT4
    generic map(
      INIT => X"FBD1"
    )
    port map (
      I0 => ir_on_adr,
      I1 => CU_present_state_FSM_FFd3_2,
      I2 => DP_PC_pc(0),
      I3 => DP_IR_data_out(0),
      O => adr_bus_0_MLTSRCEDGE
    );
  CU_rd_mem1 : LUT4
    generic map(
      INIT => X"FF10"
    )
    port map (
      I0 => DP_IR_data_out(6),
      I1 => DP_IR_data_out(7),
      I2 => CU_present_state_FSM_FFd1_0,
      I3 => CU_present_state_FSM_FFd3_2,
      O => data_on_dbus
    );
  DP_dbus_7_LogicTrst1 : LUT4
    generic map(
      INIT => X"FBD1"
    )
    port map (
      I0 => alu_on_dbus,
      I1 => data_on_dbus,
      I2 => N2,
      I3 => DP_AC_data_out(7),
      O => DP_dbus(7)
    );
  DP_dbus_6_LogicTrst1 : LUT4
    generic map(
      INIT => X"FBD1"
    )
    port map (
      I0 => N18,
      I1 => data_on_dbus,
      I2 => N3,
      I3 => DP_AC_data_out(6),
      O => DP_dbus(6)
    );
  DP_dbus_5_LogicTrst1 : LUT4
    generic map(
      INIT => X"FBD1"
    )
    port map (
      I0 => alu_on_dbus,
      I1 => data_on_dbus,
      I2 => N4,
      I3 => DP_AC_data_out(5),
      O => DP_dbus(5)
    );
  DP_dbus_4_LogicTrst1 : LUT4
    generic map(
      INIT => X"FBD1"
    )
    port map (
      I0 => alu_on_dbus,
      I1 => data_on_dbus,
      I2 => N5,
      I3 => DP_AC_data_out(4),
      O => DP_dbus(4)
    );
  DP_dbus_3_LogicTrst1 : LUT4
    generic map(
      INIT => X"FBD1"
    )
    port map (
      I0 => alu_on_dbus,
      I1 => data_on_dbus,
      I2 => N6,
      I3 => DP_AC_data_out(3),
      O => DP_dbus(3)
    );
  DP_dbus_2_LogicTrst1 : LUT4
    generic map(
      INIT => X"FBD1"
    )
    port map (
      I0 => alu_on_dbus,
      I1 => data_on_dbus,
      I2 => N7,
      I3 => DP_AC_data_out(2),
      O => DP_dbus(2)
    );
  DP_dbus_1_LogicTrst1 : LUT4
    generic map(
      INIT => X"FBD1"
    )
    port map (
      I0 => alu_on_dbus,
      I1 => data_on_dbus,
      I2 => N8,
      I3 => DP_AC_data_out(1),
      O => DP_dbus(1)
    );
  DP_dbus_0_LogicTrst1 : LUT4
    generic map(
      INIT => X"FBD1"
    )
    port map (
      I0 => alu_on_dbus,
      I1 => data_on_dbus,
      I2 => N9,
      I3 => DP_AC_data_out(0),
      O => DP_dbus(0)
    );
  reset_IBUF : IBUF
    port map (
      I => reset,
      O => reset_IBUF_75
    );
  data_bus_7_IOBUF : IOBUF
    port map (
      I => DP_dbus(7),
      T => DP_dbus_on_data_inv,
      O => N2,
      IO => data_bus(7)
    );
  data_bus_6_IOBUF : IOBUF
    port map (
      I => DP_dbus(6),
      T => DP_dbus_on_data_inv,
      O => N3,
      IO => data_bus(6)
    );
  data_bus_5_IOBUF : IOBUF
    port map (
      I => DP_dbus(5),
      T => DP_dbus_on_data_inv,
      O => N4,
      IO => data_bus(5)
    );
  data_bus_4_IOBUF : IOBUF
    port map (
      I => DP_dbus(4),
      T => DP_dbus_on_data_inv,
      O => N5,
      IO => data_bus(4)
    );
  data_bus_3_IOBUF : IOBUF
    port map (
      I => DP_dbus(3),
      T => DP_dbus_on_data_inv,
      O => N6,
      IO => data_bus(3)
    );
  data_bus_2_IOBUF : IOBUF
    port map (
      I => DP_dbus(2),
      T => DP_dbus_on_data_inv,
      O => N7,
      IO => data_bus(2)
    );
  data_bus_1_IOBUF : IOBUF
    port map (
      I => DP_dbus(1),
      T => DP_dbus_on_data_inv,
      O => N8,
      IO => data_bus(1)
    );
  data_bus_0_IOBUF : IOBUF
    port map (
      I => DP_dbus(0),
      T => DP_dbus_on_data_inv,
      O => N9,
      IO => data_bus(0)
    );
  rd_mem_OBUF : OBUF
    port map (
      I => data_on_dbus,
      O => rd_mem
    );
  wr_mem_OBUF : OBUF
    port map (
      I => dbus_on_data,
      O => wr_mem
    );
  adr_bus_5_OBUFT : OBUFT
    port map (
      I => adr_bus_5_MLTSRCEDGE,
      T => N11,
      O => adr_bus(5)
    );
  adr_bus_4_OBUFT : OBUFT
    port map (
      I => adr_bus_4_MLTSRCEDGE,
      T => N11,
      O => adr_bus(4)
    );
  adr_bus_3_OBUFT : OBUFT
    port map (
      I => adr_bus_3_MLTSRCEDGE,
      T => N11,
      O => adr_bus(3)
    );
  adr_bus_2_OBUFT : OBUFT
    port map (
      I => adr_bus_2_MLTSRCEDGE,
      T => N11,
      O => adr_bus(2)
    );
  adr_bus_1_OBUFT : OBUFT
    port map (
      I => adr_bus_1_MLTSRCEDGE,
      T => N11,
      O => adr_bus(1)
    );
  adr_bus_0_OBUFT : OBUFT
    port map (
      I => adr_bus_0_MLTSRCEDGE,
      T => N11,
      O => adr_bus(0)
    );
  CU_present_state_FSM_FFd3 : FDRS
    generic map(
      INIT => '0'
    )
    port map (
      C => clk_BUFGP_61,
      D => CU_present_state_FSM_FFd4_3,
      R => reset_IBUF_75,
      S => CU_present_state_FSM_FFd1_0,
      Q => CU_present_state_FSM_FFd3_2
    );
  DP_dbus_on_data_inv1 : LUT3
    generic map(
      INIT => X"F7"
    )
    port map (
      I0 => CU_present_state_FSM_FFd1_0,
      I1 => DP_IR_data_out(6),
      I2 => DP_IR_data_out(7),
      O => DP_dbus_on_data_inv
    );
  adr_bus_0_MLTSRCEDGELogicTrst11 : LUT3
    generic map(
      INIT => X"45"
    )
    port map (
      I0 => CU_present_state_FSM_FFd3_2,
      I1 => DP_IR_data_out(7),
      I2 => CU_present_state_FSM_FFd1_0,
      O => N11
    );
  clk_BUFGP : BUFGP
    port map (
      I => clk,
      O => clk_BUFGP_61
    );
  CU_alu_on_dbus1 : LUT2_D
    generic map(
      INIT => X"8"
    )
    port map (
      I0 => DP_IR_data_out(6),
      I1 => CU_present_state_FSM_FFd1_0,
      LO => N18,
      O => alu_on_dbus
    );

end Structure;

