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
static const char *ng0 = "E:/verilog_projects/Adding_cpu/PC.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};



static void A23_0(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;

LAB0:    t1 = (t0 + 1616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1796);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);
    t3 = (t0 + 828U);
    t4 = *((char **)t3);
    t3 = (t4 + 4U);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 652U);
    t3 = *((char **)t2);
    t2 = (t3 + 4U);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 740U);
    t3 = *((char **)t2);
    t2 = (t3 + 4U);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB11;

LAB12:
LAB13:
LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(24, ng0);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 1140);
    xsi_vlogvar_generic_wait_assign_value(t11, t10, 2, 0, 0, 6, 0LL);
    goto LAB7;

LAB8:    xsi_set_current_line(25, ng0);
    t4 = (t0 + 564U);
    t10 = *((char **)t4);
    t4 = (t0 + 1140);
    xsi_vlogvar_generic_wait_assign_value(t4, t10, 2, 0, 0, 6, 0LL);
    goto LAB10;

LAB11:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 1140);
    t10 = (t4 + 32U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t11, 6, t12, 32);
    t14 = (t0 + 1140);
    xsi_vlogvar_generic_wait_assign_value(t14, t13, 2, 0, 0, 6, 0LL);
    goto LAB13;

}


extern void work_m_00000000002888979888_1733832700_init()
{
	static char *pe[] = {(void *)A23_0};
	xsi_register_didat("work_m_00000000002888979888_1733832700", "isim/_tmp/work/m_00000000002888979888_1733832700.didat");
	xsi_register_executes(pe);
}
