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
static const char *ng0 = "E:/Academic/VHDL projects/basic_CPU/PC.vhd";
extern char *WORK_P_1474843165;

int work_p_1474843165_sub_2775657432_151938578(char *, char *, char *);
char *work_p_1474843165_sub_581362750_151938578(char *, char *, int , int );


static void work_a_1991350011_2337721868_p_0(char *t0)
{
    char t17[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t18;
    int t19;
    unsigned int t20;

LAB0:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3720);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(19, ng0);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)3);
    if (t4 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)3);
    if (t4 != 0)
        goto LAB13;

LAB14:
LAB9:    goto LAB3;

LAB5:    t2 = (t0 + 1632U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

LAB8:    xsi_set_current_line(20, ng0);
    t7 = xsi_get_transient_memory(6U);
    memset(t7, 0, 6U);
    t11 = t7;
    memset(t11, (unsigned char)2, 6U);
    t12 = (t0 + 3816);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 6U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1032U);
    t7 = *((char **)t2);
    t2 = (t0 + 3816);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t7, 6U);
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1992U);
    t7 = *((char **)t2);
    t2 = (t0 + 5744U);
    t18 = work_p_1474843165_sub_2775657432_151938578(WORK_P_1474843165, t7, t2);
    t19 = (t18 + 1);
    t8 = work_p_1474843165_sub_581362750_151938578(WORK_P_1474843165, t17, t19, 6);
    t11 = (t17 + 12U);
    t20 = *((unsigned int *)t11);
    t20 = (t20 * 1U);
    t5 = (6U != t20);
    if (t5 == 1)
        goto LAB15;

LAB16:    t12 = (t0 + 3816);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t8, 6U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB15:    xsi_size_not_matching(6U, t20, 0);
    goto LAB16;

}

static void work_a_1991350011_2337721868_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(28, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 3880);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3736);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1991350011_2337721868_init()
{
	static char *pe[] = {(void *)work_a_1991350011_2337721868_p_0,(void *)work_a_1991350011_2337721868_p_1};
	xsi_register_didat("work_a_1991350011_2337721868", "isim/Test_AddingCPU_isim_beh.exe.sim/work/a_1991350011_2337721868.didat");
	xsi_register_executes(pe);
}
