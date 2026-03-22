/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

/* This file is designed for use with ISim build 0x734844ce */

#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "time = %t,op_code = %b, r=%b ,addr= %d, w =%b, data_bus = %b";
static const char *ng1 = "E:/verilog_projects/Adding_cpu/test1.v";
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {15U, 0U};
static unsigned int ng5[] = {193U, 0U};
static unsigned int ng6[] = {72U, 0U};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {3U, 0U};
static int ng9[] = {3, 0};
static unsigned int ng10[] = {5U, 0U};
static int ng11[] = {4, 0};
static unsigned int ng12[] = {4U, 0U};
static int ng13[] = {5, 0};
static unsigned int ng14[] = {196U, 0U};
static int ng15[] = {6, 0};
static unsigned int ng16[] = {77U, 0U};
static int ng17[] = {7, 0};
static int ng18[] = {8, 0};
static unsigned int ng19[] = {79U, 0U};
static int ng20[] = {9, 0};
static int ng21[] = {10, 0};
static int ng22[] = {11, 0};
static int ng23[] = {12, 0};
static int ng24[] = {13, 0};
static unsigned int ng25[] = {69U, 0U};
static int ng26[] = {14, 0};
static unsigned int ng27[] = {10U, 0U};
static int ng28[] = {15, 0};
static unsigned int ng29[] = {0U, 255U};

void M56_1(char *);
void M56_1(char *);


static void M56_1_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
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
    char *t18;
    char *t19;
    char *t20;

LAB0:    t2 = xsi_vlog_time(t1, 1000000.000000000, 1000.000000000000);
    t3 = (t0 + 3956);
    t4 = *((char **)t3);
    t5 = ((((char*)(t4))) + 20U);
    t6 = *((char **)t5);
    t5 = (t0 + 3976);
    t7 = *((char **)t5);
    t8 = ((((char*)(t7))) + 32U);
    t9 = *((char **)t8);
    t10 = (t0 + 3992);
    t11 = *((char **)t10);
    t12 = ((((char*)(t11))) + 20U);
    t13 = *((char **)t12);
    t12 = (t0 + 4012);
    t14 = *((char **)t12);
    t15 = ((((char*)(t14))) + 32U);
    t16 = *((char **)t15);
    t17 = (t0 + 4032);
    t18 = *((char **)t17);
    t19 = ((((char*)(t18))) + 20U);
    t20 = *((char **)t19);
    xsi_vlogfile_write(1, 0, ng0, 7, t0, (char)118, t1, 64, (char)118, t6, 2, (char)118, t9, 1, (char)118, t13, 6, (char)118, t16, 1, (char)118, t20, 8);

LAB1:    return;
}

static void I54_0(char *t0)
{
    char t4[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    int t15;
    char *t16;
    unsigned int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;

LAB0:    t1 = (t0 + 1896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng1);

LAB4:    xsi_set_current_line(56, ng1);
    M56_1(t0);
    xsi_set_current_line(57, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1052);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng1);
    t2 = (t0 + 1812);
    xsi_process_wait(t2, 5000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(60, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1052);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng1);
    t2 = (t0 + 1812);
    xsi_process_wait(t2, 5000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(62, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1052);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(67, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1420);
    t6 = (t0 + 1420);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t0 + 1420);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4U);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4U);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(68, ng1);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1420);
    t6 = (t0 + 1420);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t0 + 1420);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4U);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4U);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(69, ng1);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1420);
    t6 = (t0 + 1420);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t0 + 1420);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4U);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4U);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(70, ng1);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1420);
    t6 = (t0 + 1420);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t0 + 1420);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4U);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4U);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(71, ng1);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1420);
    t6 = (t0 + 1420);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t0 + 1420);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng11)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4U);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4U);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(72, ng1);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1420);
    t6 = (t0 + 1420);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t0 + 1420);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng13)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4U);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4U);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(73, ng1);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1420);
    t6 = (t0 + 1420);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t0 + 1420);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng15)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4U);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4U);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(74, ng1);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 1420);
    t6 = (t0 + 1420);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t0 + 1420);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng17)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4U);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4U);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(75, ng1);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1420);
    t6 = (t0 + 1420);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t0 + 1420);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng18)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4U);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4U);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(76, ng1);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1420);
    t6 = (t0 + 1420);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t0 + 1420);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng20)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4U);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4U);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(77, ng1);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1420);
    t6 = (t0 + 1420);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t0 + 1420);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng21)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4U);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4U);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(78, ng1);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1420);
    t6 = (t0 + 1420);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t0 + 1420);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng22)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4U);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4U);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(79, ng1);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1420);
    t6 = (t0 + 1420);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t0 + 1420);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng23)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4U);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4U);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(80, ng1);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1420);
    t6 = (t0 + 1420);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t0 + 1420);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng24)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4U);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4U);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(81, ng1);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 1420);
    t6 = (t0 + 1420);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t0 + 1420);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng26)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4U);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4U);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(82, ng1);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 1420);
    t6 = (t0 + 1420);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t0 + 1420);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng28)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4U);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4U);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(85, ng1);

LAB39:    xsi_set_current_line(85, ng1);
    t2 = (t0 + 1812);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB7:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB10;

LAB11:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB12;

LAB13:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB14;

LAB15:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB16;

LAB17:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB18;

LAB19:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB20;

LAB21:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB22;

LAB23:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB24;

LAB25:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB26;

LAB27:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB28;

LAB29:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB30;

LAB31:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB32;

LAB33:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB34;

LAB35:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB36;

LAB37:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB38;

LAB40:    xsi_set_current_line(85, ng1);
    t3 = (t0 + 1144);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t4 + 4U);
    t9 = (t7 + 4U);
    t14 = *((unsigned int *)t7);
    t17 = (~(t14));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t8) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB42;

LAB41:    t26 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t26 & 1U);
    t27 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t27 & 1U);
    t10 = (t0 + 1144);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);
    goto LAB39;

LAB42:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t4) = (t20 | t21);
    t24 = *((unsigned int *)t8);
    t25 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t24 | t25);
    goto LAB41;

LAB43:    goto LAB1;

}

static void A89_2(char *t0)
{
    char t10[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;

LAB0:    t1 = (t0 + 2024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng1);
    t2 = (t0 + 2460);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng1);

LAB5:    xsi_set_current_line(91, ng1);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1328);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(92, ng1);
    t2 = (t0 + 1940);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(93, ng1);
    t2 = (t0 + 652U);
    t3 = *((char **)t2);
    t2 = (t3 + 4U);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB7;

LAB8:
LAB9:    xsi_set_current_line(100, ng1);
    t2 = (t0 + 740U);
    t3 = *((char **)t2);
    t2 = (t3 + 4U);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB7:    xsi_set_current_line(94, ng1);

LAB10:    xsi_set_current_line(95, ng1);
    t4 = (t0 + 1940);
    xsi_process_wait(t4, 1000000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(97, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(98, ng1);
    t2 = (t0 + 1420);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t11 = (t0 + 1420);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    t14 = (t0 + 1420);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 564U);
    t18 = *((char **)t17);
    xsi_vlog_generic_get_array_select_value(t10, 8, t4, t13, t16, 2, 1, t18, 6, 2);
    t17 = (t0 + 1236);
    xsi_vlogvar_assign_value(t17, t10, 0, 0, 8);
    goto LAB9;

LAB12:    xsi_set_current_line(100, ng1);

LAB15:    xsi_set_current_line(101, ng1);
    t4 = (t0 + 1940);
    xsi_process_wait(t4, 1000000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(102, ng1);
    t2 = (t0 + 828U);
    t3 = *((char **)t2);
    t2 = (t0 + 1420);
    t4 = (t0 + 1420);
    t11 = (t4 + 40U);
    t12 = *((char **)t11);
    t13 = (t0 + 1420);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = (t0 + 564U);
    t17 = *((char **)t16);
    xsi_vlog_generic_convert_array_indices(t10, t19, t12, t15, 2, 1, t17, 6, 2);
    t16 = (t10 + 4U);
    t5 = *((unsigned int *)t16);
    t20 = (!(t5));
    t18 = (t19 + 4U);
    t6 = *((unsigned int *)t18);
    t21 = (!(t6));
    t22 = (t20 && t21);
    if (t22 == 1)
        goto LAB17;

LAB18:    goto LAB14;

LAB17:    t7 = *((unsigned int *)t10);
    t8 = *((unsigned int *)t19);
    t23 = (t7 - t8);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t19), t24);
    goto LAB18;

}

static void C106_3(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;

LAB0:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1328);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t4 + 4U);
    t8 = (t6 + 4U);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4U);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 2520);
    t27 = (t26 + 32U);
    t28 = *((char **)t27);
    t29 = (t28 + 40U);
    t30 = *((char **)t29);
    t31 = (t30 + 4U);
    t32 = 255U;
    t33 = t32;
    t34 = (t3 + 4U);
    t35 = *((unsigned int *)t3);
    t32 = (t32 & t35);
    t36 = *((unsigned int *)t34);
    t33 = (t33 & t36);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 & 4294967040U);
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 | t32);
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 4294967040U);
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 | t33);
    xsi_driver_vfirst_trans(t26, 0, 7);
    t41 = (t0 + 2468);
    *((int *)t41) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 1236);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    goto LAB9;

LAB10:    t25 = ((char*)((ng29)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 8, t20, 8, t25, 8);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

void M56_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 2196);
    t2 = (t0 + 2476);
    xsi_vlogfile_monitor((void *)M56_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000003060113411_2221974671_init()
{
	static char *pe[] = {(void *)I54_0,(void *)A89_2,(void *)C106_3,(void *)M56_1};
	xsi_register_didat("work_m_00000000003060113411_2221974671", "isim/_tmp/work/m_00000000003060113411_2221974671.didat");
	xsi_register_executes(pe);
}
