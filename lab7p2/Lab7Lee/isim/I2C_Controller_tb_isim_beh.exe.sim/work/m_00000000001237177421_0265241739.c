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
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {5U, 0U};
static unsigned int ng5[] = {6U, 0U};
static int ng6[] = {2, 0};
static int ng7[] = {10, 0};
static int ng8[] = {1, 0};
static unsigned int ng9[] = {2U, 0U};
static int ng10[] = {9, 0};
static unsigned int ng11[] = {3U, 0U};
static unsigned int ng12[] = {4U, 0U};



static void Cont_37_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2800U);
    t3 = *((char **)t2);
    t2 = (t0 + 2640U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_divide(t5, 30, t3, 30, t4, 20);
    t2 = (t0 + 8224);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 15);
    t18 = (t0 + 8080);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_40_1(char *t0)
{
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

LAB0:    t1 = (t0 + 6768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 8096);
    *((int *)t2) = 1;
    t3 = (t0 + 6800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
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

LAB7:    xsi_set_current_line(43, ng0);

LAB9:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 4960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(42, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB8;

}

static void Initial_54_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(54, ng0);

LAB2:    xsi_set_current_line(55, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_59_3(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
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
    char *t11;
    char *t12;
    char *t14;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;

LAB0:    t1 = (t0 + 7264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 8112);
    *((int *)t2) = 1;
    t3 = (t0 + 7296);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 4800);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);

LAB15:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 5440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2800U);
    t7 = *((char **)t5);
    t5 = (t0 + 2640U);
    t9 = *((char **)t5);
    t5 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_multiply(t13, 32, t9, 20, t5, 32);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_divide(t15, 32, t7, 30, t13, 32);
    memset(t16, 0, 8);
    t10 = (t4 + 4);
    t11 = (t15 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t11);
    t25 = (t21 ^ t22);
    t26 = (t20 | t25);
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t11);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB27;

LAB24:    if (t29 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t16) = 1;

LAB27:    t14 = (t16 + 4);
    t32 = *((unsigned int *)t14);
    t33 = (~(t32));
    t34 = *((unsigned int *)t16);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB30:    goto LAB2;

LAB7:    xsi_set_current_line(61, ng0);
    t9 = (t0 + 5440);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 16, t11, 16, t12, 16);
    t14 = (t0 + 5440);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 16, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 5440);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 16, t5, 16, t7, 16);
    t9 = (t0 + 5440);
    xsi_vlogvar_wait_assign_value(t9, t13, 0, 0, 16, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 5440);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2800U);
    t9 = *((char **)t7);
    t7 = (t0 + 2640U);
    t10 = *((char **)t7);
    t7 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_multiply(t13, 32, t10, 20, t7, 32);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_divide(t15, 32, t9, 30, t13, 32);
    memset(t16, 0, 8);
    t11 = (t5 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB17;

LAB16:    t12 = (t15 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t5) < *((unsigned int *)t15))
        goto LAB19;

LAB18:    *((unsigned int *)t16) = 1;

LAB19:    t17 = (t16 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t16);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 5440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 16, t4, 16, t5, 16);
    t7 = (t0 + 5440);
    xsi_vlogvar_wait_assign_value(t7, t13, 0, 0, 16, 0LL);

LAB23:    goto LAB15;

LAB17:    t14 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB19;

LAB21:    xsi_set_current_line(63, ng0);
    t23 = ((char*)((ng2)));
    t24 = (t0 + 5440);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 16, 0LL);
    goto LAB23;

LAB26:    t12 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(67, ng0);

LAB31:    xsi_set_current_line(68, ng0);
    t17 = ((char*)((ng3)));
    t23 = (t0 + 5280);
    xsi_vlogvar_wait_assign_value(t23, t17, 0, 0, 1, 0LL);
    goto LAB30;

}

static void Always_84_4(char *t0)
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

LAB0:    t1 = (t0 + 7512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 8128);
    *((int *)t2) = 1;
    t3 = (t0 + 7544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(84, ng0);

LAB5:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 4800);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(86, ng0);

LAB24:    xsi_set_current_line(87, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 5600);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    xsi_set_current_line(88, ng0);
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

LAB26:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB27:    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5120);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB9:    xsi_set_current_line(98, ng0);

LAB31:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 5600);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 5280);
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

LAB33:    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB34:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5120);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB11:    xsi_set_current_line(107, ng0);

LAB35:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5600);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
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

LAB41:    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB42:    xsi_set_current_line(114, ng0);
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

LAB44:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5120);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB45:    goto LAB23;

LAB13:    xsi_set_current_line(121, ng0);

LAB46:    xsi_set_current_line(122, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5600);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
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

LAB52:    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB53:    xsi_set_current_line(128, ng0);
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

LAB55:    xsi_set_current_line(131, ng0);

LAB58:    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5120);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB56:    goto LAB23;

LAB15:    xsi_set_current_line(137, ng0);

LAB59:    xsi_set_current_line(142, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 5120);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5600);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(145, ng0);
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

LAB61:    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB62:    goto LAB23;

LAB17:    xsi_set_current_line(153, ng0);

LAB63:    xsi_set_current_line(154, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 5600);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 5280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
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

LAB69:    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB70:    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5120);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB19:    xsi_set_current_line(162, ng0);

LAB71:    xsi_set_current_line(163, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 5600);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 5280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
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

LAB77:    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB78:    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5120);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB25:    xsi_set_current_line(89, ng0);
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

LAB29:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB30:    goto LAB27;

LAB28:    xsi_set_current_line(90, ng0);
    t7 = ((char*)((ng3)));
    t9 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, 0, 3, 0LL);
    goto LAB30;

LAB32:    xsi_set_current_line(101, ng0);
    t7 = ((char*)((ng9)));
    t9 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, 0, 3, 0LL);
    goto LAB34;

LAB38:    t10 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(110, ng0);
    t30 = ((char*)((ng11)));
    t31 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 3, 0LL);
    goto LAB42;

LAB43:    xsi_set_current_line(115, ng0);
    t4 = (t0 + 5120);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng3)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 4, t7, 4, t9, 4);
    t10 = (t0 + 5120);
    xsi_vlogvar_wait_assign_value(t10, t21, 0, 0, 4, 0LL);
    goto LAB45;

LAB49:    t10 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(124, ng0);
    t30 = ((char*)((ng12)));
    t31 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 3, 0LL);
    goto LAB53;

LAB54:    xsi_set_current_line(128, ng0);

LAB57:    xsi_set_current_line(129, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 4, t4, 4, t5, 4);
    t7 = (t0 + 5120);
    xsi_vlogvar_wait_assign_value(t7, t21, 0, 0, 4, 0LL);
    goto LAB56;

LAB60:    xsi_set_current_line(146, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    goto LAB62;

LAB66:    t10 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(156, ng0);
    t30 = ((char*)((ng5)));
    t31 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 3, 0LL);
    goto LAB70;

LAB74:    t10 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB75;

LAB76:    xsi_set_current_line(165, ng0);
    t30 = ((char*)((ng1)));
    t31 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 3, 0LL);
    goto LAB78;

}

static void Always_179_5(char *t0)
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

LAB0:    t1 = (t0 + 7760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 8144);
    *((int *)t2) = 1;
    t3 = (t0 + 7792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(179, ng0);

LAB5:    xsi_set_current_line(180, ng0);
    t4 = (t0 + 4800);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(237, ng0);

LAB31:    xsi_set_current_line(238, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(239, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(240, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(241, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(242, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(181, ng0);

LAB24:    xsi_set_current_line(182, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB9:    xsi_set_current_line(189, ng0);

LAB25:    xsi_set_current_line(190, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB11:    xsi_set_current_line(197, ng0);

LAB26:    xsi_set_current_line(198, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB13:    xsi_set_current_line(205, ng0);

LAB27:    xsi_set_current_line(206, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB15:    xsi_set_current_line(213, ng0);

LAB28:    xsi_set_current_line(214, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(215, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(216, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(217, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(218, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(221, ng0);

LAB29:    xsi_set_current_line(222, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB19:    xsi_set_current_line(229, ng0);

LAB30:    xsi_set_current_line(230, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(232, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(233, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(234, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

}


extern void work_m_00000000001237177421_0265241739_init()
{
	static char *pe[] = {(void *)Cont_37_0,(void *)Always_40_1,(void *)Initial_54_2,(void *)Always_59_3,(void *)Always_84_4,(void *)Always_179_5};
	xsi_register_didat("work_m_00000000001237177421_0265241739", "isim/I2C_Controller_tb_isim_beh.exe.sim/work/m_00000000001237177421_0265241739.didat");
	xsi_register_executes(pe);
}
