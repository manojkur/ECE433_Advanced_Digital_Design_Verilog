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
static const char *ng0 = "C:/Users/pakanalk/OneDrive - Rose-Hulman Institute of Technology/Class Files/jr_fall/ECE433/Lab7/ECE433_Advanced_Digital_Design_Verilog/Source Files/I2C_Controller.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {10, 0};
static unsigned int ng6[] = {2U, 0U};
static int ng7[] = {9, 0};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {6U, 0U};



static void Always_37_0(char *t0)
{
    char t15[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 6360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 7424);
    *((int *)t2) = 1;
    t3 = (t0 + 6392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 2480U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(40, ng0);

LAB9:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 5440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);

LAB12:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2800U);
    t11 = *((char **)t5);
    t5 = (t0 + 2640U);
    t12 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_divide(t15, 16, t11, 1, t12, 1);
    memset(t17, 0, 8);
    t5 = (t4 + 4);
    t13 = (t15 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t15);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t13);
    t18 = (t9 ^ t10);
    t19 = (t8 | t18);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t13);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB16;

LAB13:    if (t22 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t17) = 1;

LAB16:    t16 = (t17 + 4);
    t25 = *((unsigned int *)t16);
    t26 = (~(t25));
    t27 = *((unsigned int *)t17);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5120);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB19:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(39, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(42, ng0);
    t11 = (t0 + 5280);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t13, 16, t14, 32);
    t16 = (t0 + 5280);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 16, 0LL);
    goto LAB12;

LAB15:    t14 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(46, ng0);

LAB20:    xsi_set_current_line(47, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 5120);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 1, 0LL);
    goto LAB19;

}

static void Initial_61_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(61, ng0);

LAB2:    xsi_set_current_line(62, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_67_2(char *t0)
{
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 6856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 7440);
    *((int *)t2) = 1;
    t3 = (t0 + 6888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);

LAB5:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 4640);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(69, ng0);

LAB24:    xsi_set_current_line(70, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 5440);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB27:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB9:    xsi_set_current_line(81, ng0);

LAB31:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5440);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB34:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB11:    xsi_set_current_line(90, ng0);

LAB35:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 5440);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t21, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t22 = (~(t20));
    t23 = (t17 & t22);
    if (t23 != 0)
        goto LAB39;

LAB36:    if (t20 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t21) = 1;

LAB39:    t24 = (t21 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t21);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB42:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2960U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 4960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB45:    goto LAB23;

LAB13:    xsi_set_current_line(104, ng0);

LAB46:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 5440);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 4960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t21, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t22 = (~(t20));
    t23 = (t17 & t22);
    if (t23 != 0)
        goto LAB50;

LAB47:    if (t20 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t21) = 1;

LAB50:    t24 = (t21 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t21);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB53:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2960U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(114, ng0);

LAB58:    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 4960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB56:    goto LAB23;

LAB15:    xsi_set_current_line(120, ng0);

LAB59:    xsi_set_current_line(126, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3120U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB62:    goto LAB23;

LAB17:    xsi_set_current_line(136, ng0);

LAB63:    xsi_set_current_line(137, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5440);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t21, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t22 = (~(t20));
    t23 = (t17 & t22);
    if (t23 != 0)
        goto LAB67;

LAB64:    if (t20 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t21) = 1;

LAB67:    t24 = (t21 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t21);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB70:    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB19:    xsi_set_current_line(145, ng0);

LAB71:    xsi_set_current_line(146, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5440);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t21, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t22 = (~(t20));
    t23 = (t17 & t22);
    if (t23 != 0)
        goto LAB75;

LAB72:    if (t20 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t21) = 1;

LAB75:    t24 = (t21 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t21);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB78:    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB25:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 2160U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (~(t16));
    t18 = *((unsigned int *)t5);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB30:    goto LAB27;

LAB28:    xsi_set_current_line(73, ng0);
    t7 = ((char*)((ng4)));
    t9 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, 0, 3, 0LL);
    goto LAB30;

LAB32:    xsi_set_current_line(84, ng0);
    t7 = ((char*)((ng6)));
    t9 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, 0, 3, 0LL);
    goto LAB34;

LAB38:    t10 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(93, ng0);
    t30 = ((char*)((ng8)));
    t31 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 3, 0LL);
    goto LAB42;

LAB43:    xsi_set_current_line(98, ng0);
    t4 = (t0 + 4960);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 4, t7, 4, t9, 4);
    t10 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t10, t21, 0, 0, 4, 0LL);
    goto LAB45;

LAB49:    t10 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(107, ng0);
    t30 = ((char*)((ng9)));
    t31 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 3, 0LL);
    goto LAB53;

LAB54:    xsi_set_current_line(111, ng0);

LAB57:    xsi_set_current_line(112, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 4960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 4, t4, 4, t5, 4);
    t7 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t7, t21, 0, 0, 4, 0LL);
    goto LAB56;

LAB60:    xsi_set_current_line(129, ng0);
    t4 = ((char*)((ng10)));
    t5 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    goto LAB62;

LAB66:    t10 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(139, ng0);
    t30 = ((char*)((ng11)));
    t31 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 3, 0LL);
    goto LAB70;

LAB74:    t10 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB75;

LAB76:    xsi_set_current_line(148, ng0);
    t30 = ((char*)((ng1)));
    t31 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 3, 0LL);
    goto LAB78;

}

static void Always_162_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 7104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 7456);
    *((int *)t2) = 1;
    t3 = (t0 + 7136);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(162, ng0);

LAB5:    xsi_set_current_line(163, ng0);
    t4 = (t0 + 4640);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(220, ng0);

LAB31:    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(164, ng0);

LAB24:    xsi_set_current_line(165, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB9:    xsi_set_current_line(172, ng0);

LAB25:    xsi_set_current_line(173, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB11:    xsi_set_current_line(180, ng0);

LAB26:    xsi_set_current_line(181, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB13:    xsi_set_current_line(188, ng0);

LAB27:    xsi_set_current_line(189, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB15:    xsi_set_current_line(196, ng0);

LAB28:    xsi_set_current_line(197, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(204, ng0);

LAB29:    xsi_set_current_line(205, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB19:    xsi_set_current_line(212, ng0);

LAB30:    xsi_set_current_line(213, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(215, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(216, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(217, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

}


extern void work_m_00000000001947370760_0265241739_init()
{
	static char *pe[] = {(void *)Always_37_0,(void *)Initial_61_1,(void *)Always_67_2,(void *)Always_162_3};
	xsi_register_didat("work_m_00000000001947370760_0265241739", "isim/I2C_Controller_tb_isim_beh.exe.sim/work/m_00000000001947370760_0265241739.didat");
	xsi_register_executes(pe);
}
