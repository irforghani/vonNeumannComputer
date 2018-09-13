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
extern char *STD_STANDARD;
extern char *IEEE_P_2592010699;



int work_p_1474843165_sub_2775657432_151938578(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t9[8];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    int t19;
    char *t20;
    int t21;
    char *t22;
    int t23;
    int t24;
    unsigned int t25;
    char *t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned char t31;
    unsigned char t32;
    char *t33;
    char *t34;
    int t35;
    int t36;
    int t37;
    char *t38;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    *((int *)t9) = 0;
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t5 + 4U);
    t13 = (t2 != 0);
    if (t13 == 1)
        goto LAB3;

LAB2:    t14 = (t5 + 12U);
    *((char **)t14) = t3;
    t15 = (t3 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = t17;
    t19 = 0;

LAB4:    if (t18 >= t19)
        goto LAB5;

LAB7:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t17 = *((int *)t8);
    t0 = t17;

LAB1:    return t0;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB5:    t20 = (t3 + 0U);
    t21 = *((int *)t20);
    t22 = (t3 + 8U);
    t23 = *((int *)t22);
    t24 = (t18 - t21);
    t25 = (t24 * t23);
    t26 = (t3 + 4U);
    t27 = *((int *)t26);
    xsi_vhdl_check_range_of_index(t21, t27, t23, t18);
    t28 = (1U * t25);
    t29 = (0 + t28);
    t30 = (t2 + t29);
    t31 = *((unsigned char *)t30);
    t32 = (t31 == (unsigned char)3);
    if (t32 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB6:    if (t18 == t19)
        goto LAB7;

LAB11:    t17 = (t18 + -1);
    t18 = t17;
    goto LAB4;

LAB8:    t33 = (t6 + 56U);
    t34 = *((char **)t33);
    t35 = *((int *)t34);
    t36 = xsi_vhdl_pow(2, t18);
    t37 = (t35 + t36);
    t33 = (t6 + 56U);
    t38 = *((char **)t33);
    t33 = (t38 + 0);
    *((int *)t33) = t37;
    goto LAB9;

LAB12:;
}

char *work_p_1474843165_sub_581362750_151938578(char *t1, char *t2, int t3, int t4)
{
    char t5[248];
    char t6[16];
    char t10[8];
    char t16[16];
    char *t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    int t37;
    unsigned char t38;
    int t39;
    int t40;
    int t41;
    int t42;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 384);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    *((int *)t10) = t3;
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 4U;
    t13 = (t4 - 1);
    t14 = (0 - t13);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t15 = (t15 * 1U);
    t17 = (t4 - 1);
    t18 = (t16 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t5 + 124U);
    t22 = ((IEEE_P_2592010699) + 4024);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t15);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t16);
    t26 = (t19 + 64U);
    *((char **)t26) = t16;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t15;
    t28 = (t6 + 4U);
    *((int *)t28) = t3;
    t29 = (t6 + 8U);
    *((int *)t29) = t4;
    t30 = (t16 + 12U);
    t21 = *((unsigned int *)t30);
    t21 = (t21 * 1U);
    t31 = xsi_get_transient_memory(t21);
    memset(t31, 0, t21);
    t32 = t31;
    memset(t32, (unsigned char)2, t21);
    t33 = (t19 + 56U);
    t34 = *((char **)t33);
    t33 = (t34 + 0);
    t35 = (t16 + 12U);
    t36 = *((unsigned int *)t35);
    t36 = (t36 * 1U);
    memcpy(t33, t31, t36);
    t13 = (t4 - 1);
    t14 = 0;
    t17 = t13;

LAB2:    if (t14 <= t17)
        goto LAB3;

LAB5:    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t8 = (t16 + 12U);
    t15 = *((unsigned int *)t8);
    t15 = (t15 * 1U);
    t0 = xsi_get_transient_memory(t15);
    memcpy(t0, t9, t15);
    t11 = (t16 + 0U);
    t13 = *((int *)t11);
    t12 = (t16 + 4U);
    t14 = *((int *)t12);
    t18 = (t16 + 8U);
    t17 = *((int *)t18);
    t22 = (t2 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = t13;
    t23 = (t22 + 4U);
    *((int *)t23) = t14;
    t23 = (t22 + 8U);
    *((int *)t23) = t17;
    t20 = (t14 - t13);
    t21 = (t20 * t17);
    t21 = (t21 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t21;

LAB1:    return t0;
LAB3:    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t20 = *((int *)t9);
    t37 = xsi_vhdl_mod(t20, 2);
    t38 = (t37 == 1);
    if (t38 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = *((int *)t9);
    t20 = (t13 / 2);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t8 = (t11 + 0);
    *((int *)t8) = t20;

LAB4:    if (t14 == t17)
        goto LAB5;

LAB9:    t13 = (t14 + 1);
    t14 = t13;
    goto LAB2;

LAB6:    t8 = (t19 + 56U);
    t11 = *((char **)t8);
    t8 = (t16 + 0U);
    t39 = *((int *)t8);
    t12 = (t16 + 8U);
    t40 = *((int *)t12);
    t41 = (t14 - t39);
    t15 = (t41 * t40);
    t18 = (t16 + 4U);
    t42 = *((int *)t18);
    xsi_vhdl_check_range_of_index(t39, t42, t40, t14);
    t21 = (1U * t15);
    t36 = (0 + t21);
    t22 = (t11 + t36);
    *((unsigned char *)t22) = (unsigned char)3;
    goto LAB7;

LAB10:;
}


extern void work_p_1474843165_init()
{
	static char *se[] = {(void *)work_p_1474843165_sub_2775657432_151938578,(void *)work_p_1474843165_sub_581362750_151938578};
	xsi_register_didat("work_p_1474843165", "isim/Test_AddingCPU_isim_beh.exe.sim/work/p_1474843165.didat");
	xsi_register_subprogram_executes(se);
}
