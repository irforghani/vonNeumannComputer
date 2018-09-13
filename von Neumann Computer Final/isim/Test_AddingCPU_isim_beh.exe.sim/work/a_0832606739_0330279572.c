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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/Academic/VHDL projects/basic_CPU/ALU.vhd";
extern char *WORK_P_1474843165;

int work_p_1474843165_sub_2775657432_151938578(char *, char *, char *);
char *work_p_1474843165_sub_581362750_151938578(char *, char *, int , int );


static void work_a_0832606739_0330279572_p_0(char *t0)
{
    char t10[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t11;
    int t12;
    int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(16, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB5;

LAB6:    xsi_set_current_line(21, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 3656);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);

LAB3:    t1 = (t0 + 3560);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(17, ng0);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t1 = (t0 + 3656);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(19, ng0);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t1 = (t0 + 5508U);
    t11 = work_p_1474843165_sub_2775657432_151938578(WORK_P_1474843165, t5, t1);
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t6 = (t0 + 5524U);
    t12 = work_p_1474843165_sub_2775657432_151938578(WORK_P_1474843165, t7, t6);
    t13 = (t11 + t12);
    t8 = work_p_1474843165_sub_581362750_151938578(WORK_P_1474843165, t10, t13, 8);
    t9 = (t10 + 12U);
    t14 = *((unsigned int *)t9);
    t14 = (t14 * 1U);
    t15 = (8U != t14);
    if (t15 == 1)
        goto LAB7;

LAB8:    t16 = (t0 + 3656);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 8U);
    xsi_driver_first_trans_fast(t16);
    goto LAB3;

LAB7:    xsi_size_not_matching(8U, t14, 0);
    goto LAB8;

}

static void work_a_0832606739_0330279572_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(24, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 3720);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3576);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0832606739_0330279572_init()
{
	static char *pe[] = {(void *)work_a_0832606739_0330279572_p_0,(void *)work_a_0832606739_0330279572_p_1};
	xsi_register_didat("work_a_0832606739_0330279572", "isim/Test_AddingCPU_isim_beh.exe.sim/work/a_0832606739_0330279572.didat");
	xsi_register_executes(pe);
}
