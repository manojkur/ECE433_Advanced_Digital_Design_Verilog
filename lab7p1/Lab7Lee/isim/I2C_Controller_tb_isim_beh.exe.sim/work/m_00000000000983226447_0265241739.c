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
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {9, 0};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static int ng10[] = {0, 0};
static int ng11[] = {10, 0};



static void Always_28_0(char *t0)
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

LAB0:    t1 = (t0 + 5560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 6376);
    *((int *)t2) = 1;
    t3 = (t0 + 5592);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
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

LAB7:    xsi_set_current_line(31, ng0);

LAB10:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(29, ng0);

LAB9:    xsi_set_current_line(30, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB8;

}

static void Always_44_1(char *t0)
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

LAB0:    t1 = (t0 + 5808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 6392);
    *((int *)t2) = 1;
    t3 = (t0 + 5840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 3840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(47, ng0);
    t9 = (t0 + 2320U);
    t10 = *((char **)t9);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB26:    goto LAB23;

LAB9:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 4480);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB32:    goto LAB23;

LAB11:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 4320);
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
        goto LAB36;

LAB33:    if (t22 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t25) = 1;

LAB36:    t17 = (t25 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t25);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB39:    goto LAB23;

LAB13:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 4320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng6)));
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
        goto LAB43;

LAB40:    if (t22 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t25) = 1;

LAB43:    t17 = (t25 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t25);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB46:    goto LAB23;

LAB15:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 2160U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t25, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t3);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t18 = (t14 ^ t15);
    t19 = (t13 | t18);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t7);
    t22 = (t20 | t21);
    t26 = (~(t22));
    t27 = (t19 & t26);
    if (t27 != 0)
        goto LAB50;

LAB47:    if (t22 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t25) = 1;

LAB50:    t10 = (t25 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t25);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB53:    goto LAB23;

LAB17:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 4480);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng6)));
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
        goto LAB57;

LAB54:    if (t22 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t25) = 1;

LAB57:    t17 = (t25 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t25);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB60:    goto LAB23;

LAB19:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 4480);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng6)));
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
        goto LAB64;

LAB61:    if (t22 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t25) = 1;

LAB64:    t17 = (t25 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t25);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB67:    goto LAB23;

LAB24:    xsi_set_current_line(48, ng0);
    t16 = (t0 + 2160U);
    t17 = *((char **)t16);
    t16 = (t17 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (~(t18));
    t20 = *((unsigned int *)t17);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB29:    goto LAB26;

LAB27:    xsi_set_current_line(49, ng0);
    t23 = ((char*)((ng2)));
    t24 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 3, 0LL);
    goto LAB29;

LAB30:    xsi_set_current_line(57, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 3, 0LL);
    goto LAB32;

LAB35:    t16 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(63, ng0);
    t23 = ((char*)((ng5)));
    t24 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 3, 0LL);
    goto LAB39;

LAB42:    t16 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(69, ng0);
    t23 = ((char*)((ng7)));
    t24 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 3, 0LL);
    goto LAB46;

LAB49:    t9 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(75, ng0);
    t16 = ((char*)((ng8)));
    t17 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 3, 0LL);
    goto LAB53;

LAB56:    t16 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(81, ng0);
    t23 = ((char*)((ng9)));
    t24 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 3, 0LL);
    goto LAB60;

LAB63:    t16 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(87, ng0);
    t23 = ((char*)((ng1)));
    t24 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 3, 0LL);
    goto LAB67;

}

static void Always_99_2(char *t0)
{
    char t11[8];
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
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;

LAB0:    t1 = (t0 + 6056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 6408);
    *((int *)t2) = 1;
    t3 = (t0 + 6088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng0);

LAB5:    xsi_set_current_line(100, ng0);
    t4 = (t0 + 3840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(178, ng0);

LAB35:    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(101, ng0);

LAB24:    xsi_set_current_line(102, ng0);
    t9 = ((char*)((ng10)));
    t10 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB9:    xsi_set_current_line(112, ng0);

LAB25:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB11:    xsi_set_current_line(123, ng0);

LAB26:    xsi_set_current_line(124, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t4, 4, t5, 32);
    t7 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB13:    xsi_set_current_line(134, ng0);

LAB27:    xsi_set_current_line(135, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 2160U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB31;

LAB29:    if (*((unsigned int *)t2) == 0)
        goto LAB28;

LAB30:    t4 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t4) = 1;

LAB31:    t5 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t5, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t4, 4, t5, 32);
    t7 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB15:    xsi_set_current_line(145, ng0);

LAB32:    xsi_set_current_line(146, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(156, ng0);

LAB33:    xsi_set_current_line(157, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB19:    xsi_set_current_line(167, ng0);

LAB34:    xsi_set_current_line(168, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB28:    *((unsigned int *)t11) = 1;
    goto LAB31;

}


extern void work_m_00000000000983226447_0265241739_init()
{
	static char *pe[] = {(void *)Always_28_0,(void *)Always_44_1,(void *)Always_99_2};
	xsi_register_didat("work_m_00000000000983226447_0265241739", "isim/I2C_Controller_tb_isim_beh.exe.sim/work/m_00000000000983226447_0265241739.didat");
	xsi_register_executes(pe);
}
