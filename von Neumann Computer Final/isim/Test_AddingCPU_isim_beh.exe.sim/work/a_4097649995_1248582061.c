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
extern char *STD_TEXTIO;
extern char *STD_STANDARD;
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3564397177;
extern char *WORK_P_1474843165;
static const char *ng5 = "E:/Academic/VHDL projects/basic_CPU/Test_AddingCPU.vhd";

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
void ieee_p_3564397177_sub_3205433008_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_3988856810_91900896(char *, char *, char *, char *, char *);
int work_p_1474843165_sub_2775657432_151938578(char *, char *, char *);


void work_a_4097649995_1248582061_sub_653661200_2141039630(char *t0, char *t1)
{
    char t2[848];
    char t12[16];
    char t33[16];
    char t54[16];
    char t61[8];
    char t68[8];
    char t75[8];
    char t82[8];
    char t88[16];
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t55;
    char *t56;
    int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t89;
    char *t90;
    int t91;
    unsigned char t92;
    unsigned char t93;

LAB0:    t4 = (t2 + 4U);
    t5 = ((STD_TEXTIO) + 3280);
    t6 = (t4 + 56U);
    *((char **)t6) = t5;
    t7 = (t4 + 40U);
    *((char **)t7) = 0;
    t8 = (t4 + 64U);
    *((int *)t8) = 1;
    t9 = (t4 + 48U);
    *((char **)t9) = 0;
    t10 = (t0 + 8852);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 1;
    t14 = (t13 + 4U);
    *((int *)t14) = 2;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (2 - 1);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t14 = (t2 + 76U);
    t17 = ((STD_STANDARD) + 1008);
    t18 = (t14 + 88U);
    *((char **)t18) = t17;
    t19 = xsi_get_memory(2U);
    t20 = (t14 + 56U);
    *((char **)t20) = t19;
    memcpy(t19, t10, 2U);
    t21 = (t14 + 64U);
    *((char **)t21) = t12;
    t22 = (t14 + 80U);
    *((unsigned int *)t22) = 2U;
    t23 = (t14 + 136U);
    *((char **)t23) = t19;
    t24 = (t14 + 124U);
    *((int *)t24) = 0;
    t25 = (t14 + 128U);
    t26 = (t12 + 12U);
    t16 = *((unsigned int *)t26);
    t27 = (t16 - 1);
    *((int *)t25) = t27;
    t28 = (t14 + 120U);
    t30 = (2U > 2147483644);
    if (t30 == 1)
        goto LAB2;

LAB3:    t31 = (2U + 3);
    t32 = (t31 / 16);
    t29 = t32;

LAB4:    *((unsigned int *)t28) = t29;
    t34 = (t33 + 0U);
    t35 = (t34 + 0U);
    *((int *)t35) = 1;
    t35 = (t34 + 4U);
    *((int *)t35) = 5;
    t35 = (t34 + 8U);
    *((int *)t35) = 1;
    t36 = (5 - 1);
    t37 = (t36 * 1);
    t37 = (t37 + 1);
    t35 = (t34 + 12U);
    *((unsigned int *)t35) = t37;
    t35 = (t2 + 220U);
    t38 = ((STD_STANDARD) + 1008);
    t39 = (t35 + 88U);
    *((char **)t39) = t38;
    t40 = xsi_get_memory(5U);
    t41 = (t35 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t33);
    t42 = (t35 + 64U);
    *((char **)t42) = t33;
    t43 = (t35 + 80U);
    *((unsigned int *)t43) = 5U;
    t44 = (t35 + 136U);
    *((char **)t44) = t40;
    t45 = (t35 + 124U);
    *((int *)t45) = 0;
    t46 = (t35 + 128U);
    t47 = (t33 + 12U);
    t37 = *((unsigned int *)t47);
    t48 = (t37 - 1);
    *((int *)t46) = t48;
    t49 = (t35 + 120U);
    t51 = (5U > 2147483644);
    if (t51 == 1)
        goto LAB5;

LAB6:    t52 = (5U + 3);
    t53 = (t52 / 16);
    t50 = t53;

LAB7:    *((unsigned int *)t49) = t50;
    t55 = (t54 + 0U);
    t56 = (t55 + 0U);
    *((int *)t56) = 7;
    t56 = (t55 + 4U);
    *((int *)t56) = 0;
    t56 = (t55 + 8U);
    *((int *)t56) = -1;
    t57 = (0 - 7);
    t58 = (t57 * -1);
    t58 = (t58 + 1);
    t56 = (t55 + 12U);
    *((unsigned int *)t56) = t58;
    t56 = (t2 + 364U);
    t59 = ((IEEE_P_2592010699) + 4024);
    t60 = (t56 + 88U);
    *((char **)t60) = t59;
    t62 = (t56 + 56U);
    *((char **)t62) = t61;
    xsi_type_set_default_value(t59, t61, t54);
    t63 = (t56 + 64U);
    *((char **)t63) = t54;
    t64 = (t56 + 80U);
    *((unsigned int *)t64) = 8U;
    t65 = (t2 + 484U);
    t66 = ((IEEE_P_2592010699) + 4024);
    t67 = (t65 + 88U);
    *((char **)t67) = t66;
    t69 = (t65 + 56U);
    *((char **)t69) = t68;
    xsi_type_set_default_value(t66, t68, t54);
    t70 = (t65 + 64U);
    *((char **)t70) = t54;
    t71 = (t65 + 80U);
    *((unsigned int *)t71) = 8U;
    t72 = (t2 + 604U);
    t73 = ((IEEE_P_2592010699) + 4024);
    t74 = (t72 + 88U);
    *((char **)t74) = t73;
    t76 = (t72 + 56U);
    *((char **)t76) = t75;
    xsi_type_set_default_value(t73, t75, t54);
    t77 = (t72 + 64U);
    *((char **)t77) = t54;
    t78 = (t72 + 80U);
    *((unsigned int *)t78) = 8U;
    t79 = (t2 + 724U);
    t80 = ((IEEE_P_2592010699) + 3320);
    t81 = (t79 + 88U);
    *((char **)t81) = t80;
    t83 = (t79 + 56U);
    *((char **)t83) = t82;
    xsi_type_set_default_value(t80, t82, 0);
    t84 = (t79 + 80U);
    *((unsigned int *)t84) = 1U;
    t85 = (t0 + 2776U);
    t86 = (t0 + 8854);
    t89 = (t88 + 0U);
    t90 = (t89 + 0U);
    *((int *)t90) = 1;
    t90 = (t89 + 4U);
    *((int *)t90) = 19;
    t90 = (t89 + 8U);
    *((int *)t90) = 1;
    t91 = (19 - 1);
    t58 = (t91 * 1);
    t58 = (t58 + 1);
    t90 = (t89 + 12U);
    *((unsigned int *)t90) = t58;
    std_textio_file_open1(t85, t86, t88, (unsigned char)0);
    t5 = (t0 + 2880U);
    t6 = (t0 + 8873);
    t8 = (t88 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 19;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t15 = (19 - 1);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t16;
    std_textio_file_open1(t5, t6, t88, (unsigned char)1);

LAB8:    t5 = (t0 + 2776U);
    t92 = std_textio_endfile(t5);
    t93 = (!(t92));
    if (t93 != 0)
        goto LAB9;

LAB11:    t5 = (t0 + 2776U);
    std_textio_file_close(t5);
    t5 = (t0 + 2880U);
    std_textio_file_close(t5);

LAB1:    t5 = (t35 + 80);
    t15 = *((int *)t5);
    t6 = (t35 + 136U);
    t7 = *((char **)t6);
    xsi_put_memory(t15, t7);
    t8 = (t14 + 80);
    t27 = *((int *)t8);
    t9 = (t14 + 136U);
    t10 = *((char **)t9);
    xsi_put_memory(t27, t10);
    xsi_access_variable_delete(t4);
    return;
LAB2:    t29 = 2147483647;
    goto LAB4;

LAB5:    t50 = 2147483647;
    goto LAB7;

LAB9:    t6 = (t0 + 2776U);
    std_textio_readline(STD_TEXTIO, t1, t6, t4);
    t5 = (t72 + 56U);
    t6 = *((char **)t5);
    ieee_p_3564397177_sub_3988856810_91900896(IEEE_P_3564397177, t1, t4, t6, t54);
    t5 = (t35 + 56U);
    t6 = *((char **)t5);
    std_textio_read14(STD_TEXTIO, t1, t4, t6, t33);
    t5 = (t79 + 56U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    *((unsigned char *)t5) = (unsigned char)2;
    t5 = (t35 + 56U);
    t6 = *((char **)t5);
    t5 = (t0 + 8892);
    t15 = xsi_mem_cmp(t5, t6, 5U);
    if (t15 == 1)
        goto LAB13;

LAB19:    t8 = (t0 + 8897);
    t27 = xsi_mem_cmp(t8, t6, 5U);
    if (t27 == 1)
        goto LAB14;

LAB20:    t10 = (t0 + 8902);
    t36 = xsi_mem_cmp(t10, t6, 5U);
    if (t36 == 1)
        goto LAB15;

LAB21:    t13 = (t0 + 8907);
    t48 = xsi_mem_cmp(t13, t6, 5U);
    if (t48 == 1)
        goto LAB16;

LAB22:    t18 = (t0 + 8912);
    t57 = xsi_mem_cmp(t18, t6, 5U);
    if (t57 == 1)
        goto LAB17;

LAB23:
LAB18:    t5 = (t79 + 56U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    *((unsigned char *)t5) = (unsigned char)3;
    t5 = (t65 + 56U);
    t6 = *((char **)t5);
    ieee_p_3564397177_sub_3988856810_91900896(IEEE_P_3564397177, t1, t4, t6, t54);

LAB12:    t5 = (t79 + 56U);
    t6 = *((char **)t5);
    t92 = *((unsigned char *)t6);
    t93 = (t92 == (unsigned char)2);
    if (t93 != 0)
        goto LAB25;

LAB27:
LAB26:    t5 = (t65 + 56U);
    t6 = *((char **)t5);
    t5 = (t0 + 2448U);
    t7 = *((char **)t5);
    t5 = (t72 + 56U);
    t8 = *((char **)t5);
    t15 = work_p_1474843165_sub_2775657432_151938578(WORK_P_1474843165, t8, t54);
    t27 = (t15 - 0);
    t16 = (t27 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, t15);
    t29 = (8U * t16);
    t30 = (0 + t29);
    t5 = (t7 + t30);
    t9 = (t54 + 12U);
    t31 = *((unsigned int *)t9);
    t31 = (t31 * 1U);
    memcpy(t5, t6, t31);
    t10 = (t0 + 2392U);
    xsi_variable_act(t10);
    goto LAB8;

LAB10:;
LAB13:    t20 = (t0 + 8917);
    t22 = (t65 + 56U);
    t23 = *((char **)t22);
    t22 = (t54 + 0U);
    t91 = *((int *)t22);
    t16 = (t91 - 7);
    t29 = (t16 * 1U);
    t30 = (0 + t29);
    t24 = (t23 + t30);
    memcpy(t24, t20, 2U);
    goto LAB12;

LAB14:    t5 = (t0 + 8919);
    t7 = (t65 + 56U);
    t8 = *((char **)t7);
    t7 = (t54 + 0U);
    t15 = *((int *)t7);
    t16 = (t15 - 7);
    t29 = (t16 * 1U);
    t30 = (0 + t29);
    t9 = (t8 + t30);
    memcpy(t9, t5, 2U);
    goto LAB12;

LAB15:    t5 = (t0 + 8921);
    t7 = (t65 + 56U);
    t8 = *((char **)t7);
    t7 = (t54 + 0U);
    t15 = *((int *)t7);
    t16 = (t15 - 7);
    t29 = (t16 * 1U);
    t30 = (0 + t29);
    t9 = (t8 + t30);
    memcpy(t9, t5, 2U);
    goto LAB12;

LAB16:    t5 = (t0 + 8923);
    t7 = (t65 + 56U);
    t8 = *((char **)t7);
    t7 = (t54 + 0U);
    t15 = *((int *)t7);
    t16 = (t15 - 7);
    t29 = (t16 * 1U);
    t30 = (0 + t29);
    t9 = (t8 + t30);
    memcpy(t9, t5, 2U);
    goto LAB12;

LAB17:    t5 = (t79 + 56U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    *((unsigned char *)t5) = (unsigned char)3;
    t5 = (t65 + 56U);
    t6 = *((char **)t5);
    ieee_p_3564397177_sub_3988856810_91900896(IEEE_P_3564397177, t1, t4, t6, t54);
    goto LAB12;

LAB24:;
LAB25:    t5 = (t56 + 56U);
    t7 = *((char **)t5);
    ieee_p_3564397177_sub_3988856810_91900896(IEEE_P_3564397177, t1, t4, t7, t54);
    t5 = (t56 + 56U);
    t6 = *((char **)t5);
    t5 = (t54 + 0U);
    t15 = *((int *)t5);
    t16 = (t15 - 5);
    t29 = (t16 * 1U);
    t30 = (0 + t29);
    t7 = (t6 + t30);
    t8 = (t65 + 56U);
    t9 = *((char **)t8);
    t8 = (t54 + 0U);
    t27 = *((int *)t8);
    t31 = (t27 - 5);
    t32 = (t31 * 1U);
    t37 = (0 + t32);
    t10 = (t9 + t37);
    t36 = (0 - 5);
    t50 = (t36 * -1);
    t50 = (t50 + 1);
    t51 = (1U * t50);
    memcpy(t10, t7, t51);
    goto LAB26;

}

static void work_a_4097649995_1248582061_p_0(char *t0)
{
    int64 t1;
    int64 t2;
    unsigned char t3;
    int64 t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
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

LAB0:    xsi_set_current_line(67, ng5);
    t1 = xsi_get_sim_current_time();
    t2 = (430 * 1000LL);
    t3 = (t1 < t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t14 = (t0 + 4888);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast(t14);

LAB2:    t19 = (t0 + 4776);
    *((int *)t19) = 1;

LAB1:    return;
LAB3:    t4 = (10 * 1000LL);
    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t8 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t7);
    t5 = (t0 + 4888);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t8;
    xsi_driver_first_trans_delta(t5, 0U, 1, t4);
    t13 = (t0 + 4888);
    xsi_driver_intertial_reject(t13, t4, t4);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_4097649995_1248582061_p_1(char *t0)
{
    char t8[16];
    char t18[8];
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t9;
    unsigned int t10;
    int t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;

LAB0:    t1 = (t0 + 3960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng5);
    t2 = (t0 + 3768);
    work_a_4097649995_1248582061_sub_653661200_2141039630(t0, t2);
    xsi_set_current_line(72, ng5);
    t3 = (25 * 1000LL);
    t2 = (t0 + 3768);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(73, ng5);
    t2 = (t0 + 4952);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(74, ng5);
    t3 = (405 * 1000LL);
    t2 = (t0 + 3768);
    xsi_process_wait(t2, t3);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(75, ng5);
    t2 = (t0 + 2880U);
    t4 = (t0 + 8925);
    t6 = (t8 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 19;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t9 = (19 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t10;
    std_textio_file_open1(t2, t4, t8, (unsigned char)1);
    xsi_set_current_line(76, ng5);
    t2 = (t0 + 8944);
    *((int *)t2) = 0;
    t4 = (t0 + 8948);
    *((int *)t4) = 63;
    t9 = 0;
    t11 = 63;

LAB12:    if (t9 <= t11)
        goto LAB13;

LAB15:    xsi_set_current_line(80, ng5);
    t2 = (t0 + 2880U);
    std_textio_file_close(t2);
    xsi_set_current_line(81, ng5);

LAB19:    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB13:    xsi_set_current_line(77, ng5);
    t5 = (t0 + 3768);
    t6 = (t0 + 3056U);
    t7 = (t0 + 2448U);
    t12 = *((char **)t7);
    t7 = (t0 + 8944);
    t13 = *((int *)t7);
    t14 = (t13 - 0);
    t10 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, *((int *)t7));
    t15 = (8U * t10);
    t16 = (0 + t15);
    t17 = (t12 + t16);
    memcpy(t18, t17, 8U);
    t19 = (t8 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 7;
    t20 = (t19 + 4U);
    *((int *)t20) = 0;
    t20 = (t19 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - 7);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    ieee_p_3564397177_sub_3205433008_91900896(IEEE_P_3564397177, t5, t6, t18, t8, (unsigned char)0, 0);
    xsi_set_current_line(78, ng5);
    t2 = (t0 + 3768);
    t4 = (t0 + 2880U);
    t5 = (t0 + 3056U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t5);

LAB14:    t2 = (t0 + 8944);
    t9 = *((int *)t2);
    t4 = (t0 + 8948);
    t11 = *((int *)t4);
    if (t9 == t11)
        goto LAB15;

LAB16:    t13 = (t9 + 1);
    t9 = t13;
    t5 = (t0 + 8944);
    *((int *)t5) = t9;
    goto LAB12;

LAB17:    goto LAB2;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

}

static void work_a_4097649995_1248582061_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    int64 t11;
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 4208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng5);

LAB6:    t2 = (t0 + 4792);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t9 = (t0 + 4792);
    *((int *)t9) = 0;
    xsi_set_current_line(86, ng5);
    t2 = (t0 + 5016);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(87, ng5);
    t11 = (1 * 1000LL);
    t2 = (t0 + 4016);
    xsi_process_wait(t2, t11);

LAB13:    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB5:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t4 = (t0 + 1152U);
    t8 = xsi_signal_has_event(t4);
    t3 = t8;
    goto LAB10;

LAB11:    xsi_set_current_line(88, ng5);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 != 0)
        goto LAB15;

LAB17:
LAB16:    xsi_set_current_line(93, ng5);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB2;

LAB12:    goto LAB11;

LAB14:    goto LAB12;

LAB15:    xsi_set_current_line(89, ng5);
    t11 = (1 * 1000LL);
    t2 = (t0 + 4016);
    xsi_process_wait(t2, t11);

LAB20:    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB18:    xsi_set_current_line(90, ng5);
    t2 = (t0 + 2448U);
    t4 = *((char **)t2);
    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    t2 = (t0 + 8148U);
    t12 = work_p_1474843165_sub_2775657432_151938578(WORK_P_1474843165, t5, t2);
    t13 = (t12 - 0);
    t14 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, t12);
    t15 = (8U * t14);
    t16 = (0 + t15);
    t9 = (t4 + t16);
    t10 = (t0 + 5080);
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t9, 8U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(91, ng5);
    t2 = (t0 + 5016);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB16;

LAB19:    goto LAB18;

LAB21:    goto LAB19;

LAB22:    xsi_set_current_line(94, ng5);
    t11 = (1 * 1000LL);
    t2 = (t0 + 4016);
    xsi_process_wait(t2, t11);

LAB27:    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB25:    xsi_set_current_line(95, ng5);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 2448U);
    t5 = *((char **)t2);
    t2 = (t0 + 1512U);
    t9 = *((char **)t2);
    t2 = (t0 + 8148U);
    t12 = work_p_1474843165_sub_2775657432_151938578(WORK_P_1474843165, t9, t2);
    t13 = (t12 - 0);
    t14 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, t12);
    t15 = (8U * t14);
    t16 = (0 + t15);
    t10 = (t5 + t16);
    memcpy(t10, t4, 8U);
    t17 = (t0 + 2392U);
    xsi_variable_act(t17);
    goto LAB23;

LAB26:    goto LAB25;

LAB28:    goto LAB26;

}

static void work_a_4097649995_1248582061_p_3(char *t0)
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

LAB0:    xsi_set_current_line(98, ng5);
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
    t12 = (t0 + 5144);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 8U);
    xsi_driver_first_trans_fast(t12);

LAB2:    t17 = (t0 + 4808);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t1 = (t0 + 5144);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void work_a_4097649995_1248582061_init()
{
	static char *pe[] = {(void *)work_a_4097649995_1248582061_p_0,(void *)work_a_4097649995_1248582061_p_1,(void *)work_a_4097649995_1248582061_p_2,(void *)work_a_4097649995_1248582061_p_3};
	static char *se[] = {(void *)work_a_4097649995_1248582061_sub_653661200_2141039630};
	xsi_register_didat("work_a_4097649995_1248582061", "isim/Test_AddingCPU_isim_beh.exe.sim/work/a_4097649995_1248582061.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
