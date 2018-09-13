/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;

char *WORK_P_1474843165;
char *STD_STANDARD;
char *STD_TEXTIO;
char *IEEE_P_2592010699;
char *IEEE_P_3564397177;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    std_textio_init();
    ieee_p_2592010699_init();
    ieee_p_3564397177_init();
    work_p_1474843165_init();
    work_a_1208337864_2337721868_init();
    work_a_0380725995_2337721868_init();
    work_a_1991350011_2337721868_init();
    work_a_3202186285_2337721868_init();
    work_a_0832606739_0330279572_init();
    work_a_2399776393_1181938964_init();
    work_a_3165503747_1181938964_init();
    work_a_4097649995_1248582061_init();


    xsi_register_tops("work_a_4097649995_1248582061");

    WORK_P_1474843165 = xsi_get_engine_memory("work_p_1474843165");
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");

    return xsi_run_simulation(argc, argv);

}
