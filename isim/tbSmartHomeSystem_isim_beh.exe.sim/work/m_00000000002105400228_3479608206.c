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
static const char *ng0 = "C:/Users/dr. Behnam/Downloads/SmartHomeSystem/GasDetectorSensor.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {27U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {8U, 0U};
static unsigned int ng9[] = {19U, 0U};
static unsigned int ng10[] = {20U, 0U};
static unsigned int ng11[] = {21U, 0U};
static unsigned int ng12[] = {22U, 0U};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {11U, 0U};
static unsigned int ng15[] = {12U, 0U};
static unsigned int ng16[] = {13U, 0U};
static unsigned int ng17[] = {14U, 0U};
static unsigned int ng18[] = {15U, 0U};
static unsigned int ng19[] = {16U, 0U};
static unsigned int ng20[] = {17U, 0U};
static unsigned int ng21[] = {18U, 0U};
static unsigned int ng22[] = {4U, 0U};
static unsigned int ng23[] = {9U, 0U};
static unsigned int ng24[] = {10U, 0U};
static unsigned int ng25[] = {23U, 0U};
static unsigned int ng26[] = {24U, 0U};
static unsigned int ng27[] = {25U, 0U};
static unsigned int ng28[] = {26U, 0U};
static int ng29[] = {0, 0};
static int ng30[] = {1, 0};
static int ng31[] = {2, 0};



static void Always_30_0(char *t0)
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

LAB0:    t1 = (t0 + 7616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 8928);
    *((int *)t2) = 1;
    t3 = (t0 + 7648);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 4856U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(39, ng0);

LAB10:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 5896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5736);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 6216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6056);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 6536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6376);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(33, ng0);

LAB9:    xsi_set_current_line(34, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 5736);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6056);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB8;

}

static void Always_45_1(char *t0)
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
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 7864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 8944);
    *((int *)t2) = 1;
    t3 = (t0 + 7896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 5736);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t7, 5);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB2;

LAB7:    xsi_set_current_line(48, ng0);
    t9 = (t0 + 5176U);
    t10 = *((char **)t9);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB34:    goto LAB31;

LAB9:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB37:    goto LAB31;

LAB11:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB40:    goto LAB31;

LAB13:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB43:    goto LAB31;

LAB15:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB46:    goto LAB31;

LAB17:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 5896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB49:    goto LAB31;

LAB19:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB52:    goto LAB31;

LAB21:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 5896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB55:    goto LAB31;

LAB23:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB58:    goto LAB31;

LAB25:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB61:    goto LAB31;

LAB27:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB64:    goto LAB31;

LAB29:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB67:    goto LAB31;

LAB32:    xsi_set_current_line(48, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 5896);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 5);
    goto LAB34;

LAB35:    xsi_set_current_line(49, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 5896);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB37;

LAB38:    xsi_set_current_line(50, ng0);
    t5 = ((char*)((ng4)));
    t7 = (t0 + 5896);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB40;

LAB41:    xsi_set_current_line(51, ng0);
    t5 = ((char*)((ng6)));
    t7 = (t0 + 5896);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB43;

LAB44:    xsi_set_current_line(52, ng0);
    t5 = ((char*)((ng7)));
    t7 = (t0 + 5896);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB46;

LAB47:    xsi_set_current_line(53, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 5896);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB49;

LAB50:    xsi_set_current_line(54, ng0);
    t5 = ((char*)((ng9)));
    t7 = (t0 + 5896);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB52;

LAB53:    xsi_set_current_line(55, ng0);
    t5 = ((char*)((ng6)));
    t7 = (t0 + 5896);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB55;

LAB56:    xsi_set_current_line(56, ng0);
    t5 = ((char*)((ng11)));
    t7 = (t0 + 5896);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB58;

LAB59:    xsi_set_current_line(57, ng0);
    t5 = ((char*)((ng6)));
    t7 = (t0 + 5896);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB61;

LAB62:    xsi_set_current_line(58, ng0);
    t5 = ((char*)((ng4)));
    t7 = (t0 + 5896);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB64;

LAB65:    xsi_set_current_line(59, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 5896);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB67;

}

static void Always_63_2(char *t0)
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
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 8112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 8960);
    *((int *)t2) = 1;
    t3 = (t0 + 8144);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 6056);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t7, 5);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB2;

LAB7:    xsi_set_current_line(66, ng0);
    t9 = (t0 + 5176U);
    t10 = *((char **)t9);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB38:    goto LAB35;

LAB9:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB41:    goto LAB35;

LAB11:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB44:    goto LAB35;

LAB13:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB47:    goto LAB35;

LAB15:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB50:    goto LAB35;

LAB17:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 6216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB53:    goto LAB35;

LAB19:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 6216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB56:    goto LAB35;

LAB21:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB59:    goto LAB35;

LAB23:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 6216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB62:    goto LAB35;

LAB25:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 6216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB65:    goto LAB35;

LAB27:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB68:    goto LAB35;

LAB29:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB71:    goto LAB35;

LAB31:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB74:    goto LAB35;

LAB33:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB77:    goto LAB35;

LAB36:    xsi_set_current_line(66, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 6216);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 5);
    goto LAB38;

LAB39:    xsi_set_current_line(67, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 6216);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB41;

LAB42:    xsi_set_current_line(68, ng0);
    t5 = ((char*)((ng4)));
    t7 = (t0 + 6216);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB44;

LAB45:    xsi_set_current_line(69, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 6216);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB47;

LAB48:    xsi_set_current_line(70, ng0);
    t5 = ((char*)((ng14)));
    t7 = (t0 + 6216);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB50;

LAB51:    xsi_set_current_line(71, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 6216);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB53;

LAB54:    xsi_set_current_line(72, ng0);
    t5 = ((char*)((ng14)));
    t7 = (t0 + 6216);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB56;

LAB57:    xsi_set_current_line(73, ng0);
    t5 = ((char*)((ng17)));
    t7 = (t0 + 6216);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB59;

LAB60:    xsi_set_current_line(74, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 6216);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB62;

LAB63:    xsi_set_current_line(75, ng0);
    t5 = ((char*)((ng4)));
    t7 = (t0 + 6216);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB65;

LAB66:    xsi_set_current_line(76, ng0);
    t5 = ((char*)((ng20)));
    t7 = (t0 + 6216);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB68;

LAB69:    xsi_set_current_line(77, ng0);
    t5 = ((char*)((ng21)));
    t7 = (t0 + 6216);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB71;

LAB72:    xsi_set_current_line(78, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 6216);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB74;

LAB75:    xsi_set_current_line(79, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 6216);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB77;

}

static void Always_83_3(char *t0)
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
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 8360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 8976);
    *((int *)t2) = 1;
    t3 = (t0 + 8392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(84, ng0);

LAB5:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 6376);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t7, 5);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng22)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng23)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng24)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng25)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng26)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng27)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng28)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(86, ng0);
    t9 = (t0 + 5176U);
    t10 = *((char **)t9);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB32:    goto LAB29;

LAB9:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB35:    goto LAB29;

LAB11:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 6536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB38:    goto LAB29;

LAB13:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB41:    goto LAB29;

LAB15:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 6536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB44:    goto LAB29;

LAB17:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 6536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB47:    goto LAB29;

LAB19:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB50:    goto LAB29;

LAB21:    xsi_set_current_line(93, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 6536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB53:    goto LAB29;

LAB23:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng28)));
    t3 = (t0 + 6536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB56:    goto LAB29;

LAB25:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB59:    goto LAB29;

LAB27:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB62:    goto LAB29;

LAB30:    xsi_set_current_line(86, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 6536);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 5);
    goto LAB32;

LAB33:    xsi_set_current_line(87, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 6536);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB35;

LAB36:    xsi_set_current_line(88, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 6536);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB38;

LAB39:    xsi_set_current_line(89, ng0);
    t5 = ((char*)((ng23)));
    t7 = (t0 + 6536);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB41;

LAB42:    xsi_set_current_line(90, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 6536);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB44;

LAB45:    xsi_set_current_line(91, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 6536);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB47;

LAB48:    xsi_set_current_line(92, ng0);
    t5 = ((char*)((ng26)));
    t7 = (t0 + 6536);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB50;

LAB51:    xsi_set_current_line(93, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 6536);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB53;

LAB54:    xsi_set_current_line(94, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 6536);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB56;

LAB57:    xsi_set_current_line(95, ng0);
    t5 = ((char*)((ng26)));
    t7 = (t0 + 6536);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB59;

LAB60:    xsi_set_current_line(96, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 6536);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    goto LAB62;

}

static void Always_99_4(char *t0)
{
    char t11[8];
    char t36[8];
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    unsigned int t39;
    char *t40;
    char *t41;

LAB0:    t1 = (t0 + 8608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 8992);
    *((int *)t2) = 1;
    t3 = (t0 + 8640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(100, ng0);

LAB5:    xsi_set_current_line(101, ng0);
    t4 = (t0 + 5736);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t7, 5);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 6056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB25:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 5, t5, 5);
    if (t8 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t8 == 1)
        goto LAB28;

LAB29:
LAB30:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 6376);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB38:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 5, t7, 5);
    if (t8 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng27)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t8 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB2;

LAB7:    xsi_set_current_line(102, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 5576);
    t12 = (t0 + 5576);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng29)));
    xsi_vlog_generic_convert_bit_index(t11, t14, 2, t15, 32, 1);
    t16 = (t11 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB12;

LAB13:    goto LAB11;

LAB9:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t4 + 4);
    t17 = *((unsigned int *)t3);
    t19 = (~(t17));
    t20 = *((unsigned int *)t4);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t3) == 0)
        goto LAB14;

LAB16:    t5 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t5) = 1;

LAB17:    t7 = (t11 + 4);
    t9 = (t4 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    *((unsigned int *)t11) = t24;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB19;

LAB18:    t29 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t29 & 1U);
    t30 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t30 & 1U);
    t10 = (t11 + 4);
    t31 = *((unsigned int *)t10);
    t32 = (~(t31));
    t33 = *((unsigned int *)t11);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB20;

LAB21:
LAB22:    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t10, t9, 0, *((unsigned int *)t11), 1);
    goto LAB13;

LAB14:    *((unsigned int *)t11) = 1;
    goto LAB17;

LAB19:    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t9);
    *((unsigned int *)t11) = (t25 | t26);
    t27 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t27 | t28);
    goto LAB18;

LAB20:    xsi_set_current_line(103, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 5576);
    t14 = (t0 + 5576);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t37 = ((char*)((ng29)));
    xsi_vlog_generic_convert_bit_index(t36, t16, 2, t37, 32, 1);
    t38 = (t36 + 4);
    t39 = *((unsigned int *)t38);
    t18 = (!(t39));
    if (t18 == 1)
        goto LAB23;

LAB24:    goto LAB22;

LAB23:    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t36), 1);
    goto LAB24;

LAB26:    xsi_set_current_line(106, ng0);
    t7 = ((char*)((ng1)));
    t9 = (t0 + 5576);
    t10 = (t0 + 5576);
    t12 = (t10 + 72U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng30)));
    xsi_vlog_generic_convert_bit_index(t11, t13, 2, t14, 32, 1);
    t15 = (t11 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB31;

LAB32:    goto LAB30;

LAB28:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 5176U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t17 = *((unsigned int *)t3);
    t19 = (~(t17));
    t20 = *((unsigned int *)t5);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB33;

LAB34:
LAB35:    goto LAB30;

LAB31:    xsi_vlogvar_assign_value(t9, t7, 0, *((unsigned int *)t11), 1);
    goto LAB32;

LAB33:    xsi_set_current_line(107, ng0);
    t7 = ((char*)((ng2)));
    t9 = (t0 + 5576);
    t10 = (t0 + 5576);
    t12 = (t10 + 72U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng30)));
    xsi_vlog_generic_convert_bit_index(t11, t13, 2, t14, 32, 1);
    t15 = (t11 + 4);
    t23 = *((unsigned int *)t15);
    t18 = (!(t23));
    if (t18 == 1)
        goto LAB36;

LAB37:    goto LAB35;

LAB36:    xsi_vlogvar_assign_value(t9, t7, 0, *((unsigned int *)t11), 1);
    goto LAB37;

LAB39:    xsi_set_current_line(110, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 5576);
    t12 = (t0 + 5576);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng31)));
    xsi_vlog_generic_convert_bit_index(t11, t14, 2, t15, 32, 1);
    t16 = (t11 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB44;

LAB45:    goto LAB43;

LAB41:    xsi_set_current_line(111, ng0);
    t3 = (t0 + 5176U);
    t7 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t7 + 4);
    t17 = *((unsigned int *)t3);
    t19 = (~(t17));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB49;

LAB47:    if (*((unsigned int *)t3) == 0)
        goto LAB46;

LAB48:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;

LAB49:    t10 = (t11 + 4);
    t12 = (t7 + 4);
    t23 = *((unsigned int *)t7);
    t24 = (~(t23));
    *((unsigned int *)t11) = t24;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB51;

LAB50:    t29 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t29 & 1U);
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & 1U);
    t13 = (t11 + 4);
    t31 = *((unsigned int *)t13);
    t32 = (~(t31));
    t33 = *((unsigned int *)t11);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB52;

LAB53:
LAB54:    goto LAB43;

LAB44:    xsi_vlogvar_assign_value(t10, t9, 0, *((unsigned int *)t11), 1);
    goto LAB45;

LAB46:    *((unsigned int *)t11) = 1;
    goto LAB49;

LAB51:    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t25 | t26);
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t12);
    *((unsigned int *)t10) = (t27 | t28);
    goto LAB50;

LAB52:    xsi_set_current_line(111, ng0);
    t14 = ((char*)((ng2)));
    t15 = (t0 + 5576);
    t16 = (t0 + 5576);
    t37 = (t16 + 72U);
    t38 = *((char **)t37);
    t40 = ((char*)((ng31)));
    xsi_vlog_generic_convert_bit_index(t36, t38, 2, t40, 32, 1);
    t41 = (t36 + 4);
    t39 = *((unsigned int *)t41);
    t18 = (!(t39));
    if (t18 == 1)
        goto LAB55;

LAB56:    goto LAB54;

LAB55:    xsi_vlogvar_assign_value(t15, t14, 0, *((unsigned int *)t36), 1);
    goto LAB56;

}


extern void work_m_00000000002105400228_3479608206_init()
{
	static char *pe[] = {(void *)Always_30_0,(void *)Always_45_1,(void *)Always_63_2,(void *)Always_83_3,(void *)Always_99_4};
	xsi_register_didat("work_m_00000000002105400228_3479608206", "isim/tbSmartHomeSystem_isim_beh.exe.sim/work/m_00000000002105400228_3479608206.didat");
	xsi_register_executes(pe);
}
