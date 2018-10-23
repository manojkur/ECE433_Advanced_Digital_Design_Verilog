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
static int ng3[] = {4, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {10, 0};
static unsigned int ng7[] = {2U, 0U};
static int ng8[] = {9, 0};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {6U, 0U};



static void Always_41_0(char *t0)
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

LAB0:    t1 = (t0 + 6040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 7352);
    *((int *)t2) = 1;
    t3 = (t0 + 6072);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
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

LAB7:    xsi_set_current_line(44, ng0);

LAB9:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 4640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(43, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB8;

}

static void Initial_49_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(49, ng0);

LAB2:    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_54_2(char *t0)
{
    char t11[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;

LAB0:    t1 = (t0 + 6536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 7368);
    *((int *)t2) = 1;
    t3 = (t0 + 6568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 4480);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 5120);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t12 = (t9 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB7;

LAB6:    t13 = (t10 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t9) < *((unsigned int *)t10))
        goto LAB9;

LAB8:    *((unsigned int *)t11) = 1;

LAB9:    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t11);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = (t6 + 4);
    t20 = (t11 + 4);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t19);
    t23 = *((unsigned int *)t20);
    t24 = (t22 | t23);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB11;

LAB12:
LAB13:    t43 = (t15 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t15);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 16, t5, 32);
    t6 = (t0 + 5120);
    xsi_vlogvar_wait_assign_value(t6, t11, 0, 0, 16, 0LL);

LAB16:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 ^ t17);
    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 ^ t23);
    t25 = (t18 | t24);
    t26 = *((unsigned int *)t6);
    t27 = *((unsigned int *)t7);
    t28 = (t26 | t27);
    t31 = (~(t28));
    t32 = (t25 & t31);
    if (t32 != 0)
        goto LAB20;

LAB17:    if (t28 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t11) = 1;

LAB20:    t9 = (t11 + 4);
    t33 = *((unsigned int *)t9);
    t35 = (~(t33));
    t36 = *((unsigned int *)t11);
    t37 = (t36 & t35);
    t39 = (t37 != 0);
    if (t39 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB23:    goto LAB2;

LAB7:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB9;

LAB11:    t27 = *((unsigned int *)t15);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t15) = (t27 | t28);
    t29 = (t6 + 4);
    t30 = (t11 + 4);
    t31 = *((unsigned int *)t29);
    t32 = (~(t31));
    t33 = *((unsigned int *)t6);
    t34 = (t33 & t32);
    t35 = *((unsigned int *)t30);
    t36 = (~(t35));
    t37 = *((unsigned int *)t11);
    t38 = (t37 & t36);
    t39 = (~(t34));
    t40 = (~(t38));
    t41 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t41 & t39);
    t42 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t42 & t40);
    goto LAB13;

LAB14:    xsi_set_current_line(56, ng0);
    t49 = ((char*)((ng2)));
    t50 = (t0 + 5120);
    xsi_vlogvar_wait_assign_value(t50, t49, 0, 0, 16, 0LL);
    goto LAB16;

LAB19:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(60, ng0);

LAB24:    xsi_set_current_line(61, ng0);
    t10 = ((char*)((ng5)));
    t12 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t12, t10, 0, 0, 1, 0LL);
    goto LAB23;

}

static void Always_68_3(char *t0)
{
    char t25[8];
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
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;

LAB0:    t1 = (t0 + 6784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 7384);
    *((int *)t2) = 1;
    t3 = (t0 + 6816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(68, ng0);

LAB5:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 4320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(70, ng0);

LAB24:    xsi_set_current_line(71, ng0);
    t9 = (t0 + 2320U);
    t10 = *((char **)t9);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB27:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB9:    xsi_set_current_line(81, ng0);

LAB31:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 4960);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB34:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB11:    xsi_set_current_line(89, ng0);

LAB35:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 4800);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng8)));
    memset(t25, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t18 = (t14 ^ t15);
    t19 = (t13 | t18);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    t26 = (~(t22));
    t27 = (t19 & t26);
    if (t27 != 0)
        goto LAB39;

LAB36:    if (t22 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t25) = 1;

LAB39:    t17 = (t25 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t25);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB42:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2640U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB45:    goto LAB23;

LAB13:    xsi_set_current_line(102, ng0);

LAB46:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 4800);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng4)));
    memset(t25, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t18 = (t14 ^ t15);
    t19 = (t13 | t18);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    t26 = (~(t22));
    t27 = (t19 & t26);
    if (t27 != 0)
        goto LAB50;

LAB47:    if (t22 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t25) = 1;

LAB50:    t17 = (t25 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t25);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB53:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2640U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(111, ng0);

LAB58:    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB56:    goto LAB23;

LAB15:    xsi_set_current_line(117, ng0);

LAB59:    xsi_set_current_line(122, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2800U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB62:    goto LAB23;

LAB17:    xsi_set_current_line(132, ng0);

LAB63:    xsi_set_current_line(133, ng0);
    t3 = (t0 + 4960);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng4)));
    memset(t25, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t18 = (t14 ^ t15);
    t19 = (t13 | t18);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    t26 = (~(t22));
    t27 = (t19 & t26);
    if (t27 != 0)
        goto LAB67;

LAB64:    if (t22 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t25) = 1;

LAB67:    t17 = (t25 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t25);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB70:    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB19:    xsi_set_current_line(140, ng0);

LAB71:    xsi_set_current_line(141, ng0);
    t3 = (t0 + 4960);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng4)));
    memset(t25, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t18 = (t14 ^ t15);
    t19 = (t13 | t18);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    t26 = (~(t22));
    t27 = (t19 & t26);
    if (t27 != 0)
        goto LAB75;

LAB72:    if (t22 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t25) = 1;

LAB75:    t17 = (t25 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t25);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB78:    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB25:    xsi_set_current_line(72, ng0);
    t16 = (t0 + 2160U);
    t17 = *((char **)t16);
    t16 = (t17 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (~(t18));
    t20 = *((unsigned int *)t17);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB30:    goto LAB27;

LAB28:    xsi_set_current_line(73, ng0);
    t23 = ((char*)((ng5)));
    t24 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 3, 0LL);
    goto LAB30;

LAB32:    xsi_set_current_line(83, ng0);
    t9 = ((char*)((ng7)));
    t10 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 3, 0LL);
    goto LAB34;

LAB38:    t16 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(91, ng0);
    t23 = ((char*)((ng9)));
    t24 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 3, 0LL);
    goto LAB42;

LAB43:    xsi_set_current_line(96, ng0);
    t4 = (t0 + 4800);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_minus(t25, 4, t7, 4, t9, 4);
    t10 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t10, t25, 0, 0, 4, 0LL);
    goto LAB45;

LAB49:    t16 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(104, ng0);
    t23 = ((char*)((ng10)));
    t24 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 3, 0LL);
    goto LAB53;

LAB54:    xsi_set_current_line(108, ng0);

LAB57:    xsi_set_current_line(109, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_minus(t25, 4, t4, 4, t5, 4);
    t7 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t7, t25, 0, 0, 4, 0LL);
    goto LAB56;

LAB60:    xsi_set_current_line(125, ng0);
    t4 = ((char*)((ng11)));
    t5 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    goto LAB62;

LAB66:    t16 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(134, ng0);
    t23 = ((char*)((ng12)));
    t24 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 3, 0LL);
    goto LAB70;

LAB74:    t16 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB75;

LAB76:    xsi_set_current_line(142, ng0);
    t23 = ((char*)((ng1)));
    t24 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 3, 0LL);
    goto LAB78;

}

static void Always_156_4(char *t0)
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

LAB0:    t1 = (t0 + 7032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 7400);
    *((int *)t2) = 1;
    t3 = (t0 + 7064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(156, ng0);

LAB5:    xsi_set_current_line(157, ng0);
    t4 = (t0 + 4320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(221, ng0);

LAB31:    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(158, ng0);

LAB24:    xsi_set_current_line(159, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 3200);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB9:    xsi_set_current_line(167, ng0);

LAB25:    xsi_set_current_line(168, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3200);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB11:    xsi_set_current_line(176, ng0);

LAB26:    xsi_set_current_line(177, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3200);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB13:    xsi_set_current_line(185, ng0);

LAB27:    xsi_set_current_line(186, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3200);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB15:    xsi_set_current_line(194, ng0);

LAB28:    xsi_set_current_line(195, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3200);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(203, ng0);

LAB29:    xsi_set_current_line(204, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3200);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB19:    xsi_set_current_line(212, ng0);

LAB30:    xsi_set_current_line(213, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3200);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(215, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(216, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(217, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(218, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

}


extern void work_m_00000000000465136385_0265241739_init()
{
	static char *pe[] = {(void *)Always_41_0,(void *)Initial_49_1,(void *)Always_54_2,(void *)Always_68_3,(void *)Always_156_4};
	xsi_register_didat("work_m_00000000000465136385_0265241739", "isim/lab7phase1overall_isim_beh.exe.sim/work/m_00000000000465136385_0265241739.didat");
	xsi_register_executes(pe);
}
