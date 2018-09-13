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
static const char *ng0 = "E:/Academic/VHDL projects/basic_CPU/datapath.vhd";
extern char *IEEE_P_2592010699;



static void work_a_2399776393_1181938964_p_0(char *t0)
{
    char t2[16];
    char t10[16];
    char t12[16];
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t11;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(27, ng0);

LAB3:    t3 = ((IEEE_P_2592010699) + 4024);
    t1 = xsi_base_array_concat(t1, t2, t3, (char)99, (unsigned char)2, (char)99, (unsigned char)2, (char)101);
    t4 = (t0 + 3912U);
    t5 = *((char **)t4);
    t6 = (7 - 5);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t4 = (t5 + t8);
    t11 = ((IEEE_P_2592010699) + 4024);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 5;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t15 = (0 - 5);
    t16 = (t15 * -1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t9 = xsi_base_array_concat(t9, t10, t11, (char)97, t1, t2, (char)97, t4, t12, (char)101);
    t16 = (1U + 1U);
    t17 = (t16 + 6U);
    t18 = (8U != t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    t14 = (t0 + 7696);
    t19 = (t14 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t9, 8U);
    xsi_driver_first_trans_fast(t14);

LAB2:    t23 = (t0 + 7520);
    *((int *)t23) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t17, 0);
    goto LAB6;

}

static void work_a_2399776393_1181938964_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t14 = xsi_get_transient_memory(6U);
    memset(t14, 0, 6U);
    t15 = t14;
    memset(t15, (unsigned char)4, 6U);
    t16 = (t0 + 7760);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t14, 6U);
    xsi_driver_first_trans_fast_port(t16);

LAB2:    t21 = (t0 + 7536);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 3912U);
    t5 = *((char **)t1);
    t6 = (7 - 5);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t5 + t8);
    t9 = (t0 + 7760);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 6U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2399776393_1181938964_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = xsi_get_transient_memory(6U);
    memset(t10, 0, 6U);
    t11 = t10;
    memset(t11, (unsigned char)4, 6U);
    t12 = (t0 + 7824);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 6U);
    xsi_driver_first_trans_fast_port(t12);

LAB2:    t17 = (t0 + 7552);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4552U);
    t5 = *((char **)t1);
    t1 = (t0 + 7824);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 6U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2399776393_1181938964_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = xsi_get_transient_memory(8U);
    memset(t10, 0, 8U);
    t11 = t10;
    memset(t11, (unsigned char)4, 8U);
    t12 = (t0 + 7888);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 8U);
    xsi_driver_first_trans_fast(t12);

LAB2:    t17 = (t0 + 7568);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4232U);
    t5 = *((char **)t1);
    t1 = (t0 + 7888);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2399776393_1181938964_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = xsi_get_transient_memory(8U);
    memset(t10, 0, 8U);
    t11 = t10;
    memset(t11, (unsigned char)4, 8U);
    t12 = (t0 + 7952);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 8U);
    xsi_driver_first_trans_fast_port(t12);

LAB2:    t17 = (t0 + 7584);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 3752U);
    t5 = *((char **)t1);
    t1 = (t0 + 7952);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2399776393_1181938964_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = xsi_get_transient_memory(8U);
    memset(t10, 0, 8U);
    t11 = t10;
    memset(t11, (unsigned char)4, 8U);
    t12 = (t0 + 8016);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 8U);
    xsi_driver_first_trans_fast(t12);

LAB2:    t17 = (t0 + 7600);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 3432U);
    t5 = *((char **)t1);
    t1 = (t0 + 8016);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2399776393_1181938964_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(39, ng0);

LAB3:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t3 = (7 - 7);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 8080);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 7616);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2399776393_1181938964_init()
{
	static char *pe[] = {(void *)work_a_2399776393_1181938964_p_0,(void *)work_a_2399776393_1181938964_p_1,(void *)work_a_2399776393_1181938964_p_2,(void *)work_a_2399776393_1181938964_p_3,(void *)work_a_2399776393_1181938964_p_4,(void *)work_a_2399776393_1181938964_p_5,(void *)work_a_2399776393_1181938964_p_6};
	xsi_register_didat("work_a_2399776393_1181938964", "isim/Test_AddingCPU_isim_beh.exe.sim/work/a_2399776393_1181938964.didat");
	xsi_register_executes(pe);
}
