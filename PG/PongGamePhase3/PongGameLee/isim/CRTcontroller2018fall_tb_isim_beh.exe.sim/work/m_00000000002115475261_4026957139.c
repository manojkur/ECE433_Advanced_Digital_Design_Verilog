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
static const char *ng0 = "C:/Users/pakanalk/OneDrive - Rose-Hulman Institute of Technology/Class Files/jr_fall/ECE433/ECE433_Advanced_Digital_Design_Verilog/PG/PongGamePhase3/SourceFiles/CRTcontrollerr2018fall_tb.v";
static int ng1[] = {8, 0};
static int ng2[] = {4, 0};
static int ng3[] = {6, 0};
static int ng4[] = {2, 0};
static int ng5[] = {0, 0};
static int ng6[] = {1, 0};



static void NetDecl_11_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 8012);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 5872);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
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
    xsi_driver_vfirst_trans(t4, 0, 0U);
    t18 = (t0 + 5776);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Initial_19_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(19, ng0);

LAB2:    xsi_set_current_line(21, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 10);
    xsi_set_current_line(22, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 10);
    xsi_set_current_line(23, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 10);
    xsi_set_current_line(24, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 10);
    xsi_set_current_line(25, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_28_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 4272);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2888);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_29_3(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 4768);
    t3 = (t0 + 4520);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 5016);
    t5 = (t0 + 4520);
    xsi_add_process_toexecute(0, t4, t5);
    t6 = (t0 + 5264);
    t7 = (t0 + 4520);
    xsi_add_process_toexecute(0, t6, t7);
    t8 = (t0 + 3048);
    memset(t9, 0, 8);
    *((unsigned int *)t9) = 3;
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    t10 = (t0 + 5792);
    *((int *)t10) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t11 = (t0 + 3048);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    if (*((int *)t13) > 0)
        goto LAB5;

LAB6:    t15 = (t0 + 4520);
    xsi_clean_active_fork_process_list(t15);
    goto LAB1;

LAB5:    t14 = (t0 + 5792);
    *((int *)t14) = 1;
    goto LAB1;

}

static void Forked_30_4(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 4960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4768);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(30, ng0);
    t3 = (t0 + 4768);
    xsi_process_wait(t3, 0LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(30, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}

static void Forked_30_5(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 5208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5016);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(30, ng0);
    t3 = (t0 + 5016);
    xsi_process_wait(t3, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(30, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}

static void Forked_31_6(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 5456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5264);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(31, ng0);
    t3 = (t0 + 5264);
    xsi_process_wait(t3, 1200000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(31, ng0);
    xsi_vlog_stop(1);
    goto LAB5;

}


extern void work_m_00000000002115475261_4026957139_init()
{
	static char *pe[] = {(void *)NetDecl_11_0,(void *)Initial_19_1,(void *)Always_28_2,(void *)Initial_29_3,(void *)Forked_30_4,(void *)Forked_30_5,(void *)Forked_31_6};
	xsi_register_didat("work_m_00000000002115475261_4026957139", "isim/CRTcontroller2018fall_tb_isim_beh.exe.sim/work/m_00000000002115475261_4026957139.didat");
	xsi_register_executes(pe);
}
