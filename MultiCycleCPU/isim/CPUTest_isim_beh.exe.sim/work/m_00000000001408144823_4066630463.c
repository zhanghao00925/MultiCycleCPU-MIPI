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
static const char *ng0 = "E:/Study/Computer Organization and Design/MultiCycleCPU/CU.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {56U, 0U};
static unsigned int ng3[] = {58U, 0U};
static unsigned int ng4[] = {57U, 0U};
static unsigned int ng5[] = {63U, 0U};
static unsigned int ng6[] = {48U, 0U};
static unsigned int ng7[] = {49U, 0U};
static unsigned int ng8[] = {52U, 0U};
static unsigned int ng9[] = {24U, 0U};
static unsigned int ng10[] = {18U, 0U};
static int ng11[] = {1, 0};
static int ng12[] = {2, 0};
static unsigned int ng13[] = {2U, 0U};
static unsigned int ng14[] = {1U, 0U};
static unsigned int ng15[] = {16U, 0U};
static unsigned int ng16[] = {5U, 0U};
static unsigned int ng17[] = {17U, 0U};
static unsigned int ng18[] = {6U, 0U};
static unsigned int ng19[] = {4U, 0U};
static unsigned int ng20[] = {39U, 0U};
static unsigned int ng21[] = {0U, 0U};
static int ng22[] = {3, 0};



static void Initial_68_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(68, ng0);

LAB2:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 880);
    t2 = *((char **)t1);
    t1 = (t0 + 7520);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 3);

LAB1:    return;
}

static void Always_72_1(char *t0)
{
    char t6[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    int t56;

LAB0:    t1 = (t0 + 8688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 9256);
    *((int *)t2) = 1;
    t3 = (t0 + 8720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);

LAB5:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 4880U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(113, ng0);

LAB98:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 7520);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(73, ng0);

LAB13:    xsi_set_current_line(74, ng0);
    t28 = (t0 + 7520);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t0 + 880);
    t32 = *((char **)t31);
    memset(t33, 0, 8);
    t31 = (t30 + 4);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t32);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t31);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB17;

LAB14:    if (t44 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t33) = 1;

LAB17:    t48 = (t33 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t33);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 7520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1016);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB25;

LAB22:    if (t18 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t6) = 1;

LAB25:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 7520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1424);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB51;

LAB48:    if (t18 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t6) = 1;

LAB51:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 7520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1560);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB59;

LAB56:    if (t18 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t6) = 1;

LAB59:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 7520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1832);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB76;

LAB73:    if (t18 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t6) = 1;

LAB76:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 7520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1288);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB84;

LAB81:    if (t18 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t6) = 1;

LAB84:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB85;

LAB86:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 7520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1152);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB92;

LAB89:    if (t18 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t6) = 1;

LAB92:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(109, ng0);

LAB97:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 7520);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB95:
LAB87:
LAB79:
LAB62:
LAB54:
LAB28:
LAB20:    goto LAB12;

LAB16:    t47 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(74, ng0);

LAB21:    xsi_set_current_line(75, ng0);
    t54 = (t0 + 1016);
    t55 = *((char **)t54);
    t54 = (t0 + 7520);
    xsi_vlogvar_assign_value(t54, t55, 0, 0, 3);
    goto LAB20;

LAB24:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(77, ng0);

LAB29:    xsi_set_current_line(78, ng0);
    t28 = (t0 + 5200U);
    t29 = *((char **)t28);

LAB30:    t28 = ((char*)((ng2)));
    t56 = xsi_vlog_unsigned_case_compare(t29, 6, t28, 6);
    if (t56 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng3)));
    t56 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t56 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng4)));
    t56 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t56 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng5)));
    t56 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t56 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng6)));
    t56 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t56 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng7)));
    t56 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t56 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng8)));
    t56 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t56 == 1)
        goto LAB43;

LAB44:
LAB46:
LAB45:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = (t0 + 7520);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB47:    goto LAB28;

LAB31:    xsi_set_current_line(79, ng0);
    t30 = (t0 + 880);
    t31 = *((char **)t30);
    t30 = (t0 + 7520);
    xsi_vlogvar_assign_value(t30, t31, 0, 0, 3);
    goto LAB47;

LAB33:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 880);
    t4 = *((char **)t3);
    t3 = (t0 + 7520);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    goto LAB47;

LAB35:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 880);
    t4 = *((char **)t3);
    t3 = (t0 + 7520);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    goto LAB47;

LAB37:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 880);
    t4 = *((char **)t3);
    t3 = (t0 + 7520);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    goto LAB47;

LAB39:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 1424);
    t4 = *((char **)t3);
    t3 = (t0 + 7520);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    goto LAB47;

LAB41:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 1424);
    t4 = *((char **)t3);
    t3 = (t0 + 7520);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    goto LAB47;

LAB43:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1288);
    t4 = *((char **)t3);
    t3 = (t0 + 7520);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    goto LAB47;

LAB50:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(89, ng0);

LAB55:    xsi_set_current_line(90, ng0);
    t28 = (t0 + 1560);
    t30 = *((char **)t28);
    t28 = (t0 + 7520);
    xsi_vlogvar_assign_value(t28, t30, 0, 0, 3);
    goto LAB54;

LAB58:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(92, ng0);

LAB63:    xsi_set_current_line(93, ng0);
    t28 = (t0 + 5200U);
    t30 = *((char **)t28);
    t28 = ((char*)((ng6)));
    memset(t33, 0, 8);
    t31 = (t30 + 4);
    t32 = (t28 + 4);
    t35 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t28);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t31);
    t39 = *((unsigned int *)t32);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t32);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB67;

LAB64:    if (t44 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t33) = 1;

LAB67:    t47 = (t33 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t33);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(96, ng0);

LAB72:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t2 = (t0 + 7520);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB70:    goto LAB62;

LAB66:    t34 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(93, ng0);

LAB71:    xsi_set_current_line(94, ng0);
    t48 = (t0 + 880);
    t54 = *((char **)t48);
    t48 = (t0 + 7520);
    xsi_vlogvar_assign_value(t48, t54, 0, 0, 3);
    goto LAB70;

LAB75:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(100, ng0);

LAB80:    xsi_set_current_line(101, ng0);
    t28 = (t0 + 880);
    t30 = *((char **)t28);
    t28 = (t0 + 7520);
    xsi_vlogvar_assign_value(t28, t30, 0, 0, 3);
    goto LAB79;

LAB83:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(103, ng0);

LAB88:    xsi_set_current_line(104, ng0);
    t28 = (t0 + 880);
    t30 = *((char **)t28);
    t28 = (t0 + 7520);
    xsi_vlogvar_assign_value(t28, t30, 0, 0, 3);
    goto LAB87;

LAB91:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB92;

LAB93:    xsi_set_current_line(106, ng0);

LAB96:    xsi_set_current_line(107, ng0);
    t28 = (t0 + 1696);
    t30 = *((char **)t28);
    t28 = (t0 + 7520);
    xsi_vlogvar_assign_value(t28, t30, 0, 0, 3);
    goto LAB95;

}

static void Always_118_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 8936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 9272);
    *((int *)t2) = 1;
    t3 = (t0 + 8968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(118, ng0);

LAB5:    xsi_set_current_line(119, ng0);
    t4 = (t0 + 7520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 880);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 1152);
    t15 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t15, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 1288);
    t15 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t15, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1424);
    t16 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t16, 32);
    if (t9 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1560);
    t16 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t16, 32);
    if (t9 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1696);
    t17 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t17, 32);
    if (t9 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1832);
    t17 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t17, 32);
    if (t9 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(120, ng0);

LAB24:    xsi_set_current_line(121, ng0);
    t7 = (t0 + 472);
    t10 = *((char **)t7);
    t7 = (t0 + 5600);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 1);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 6080);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 6400);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 6560);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 6720);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB23;

LAB9:    xsi_set_current_line(129, ng0);

LAB25:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 5200U);
    t4 = *((char **)t2);

LAB26:    t2 = ((char*)((ng9)));
    t11 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t11 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng10)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t9 == 1)
        goto LAB29;

LAB30:
LAB32:
LAB31:    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 7360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB33:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 5200U);
    t3 = *((char **)t2);

LAB34:    t2 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t9 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng3)));
    t9 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t9 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng4)));
    t9 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t9 == 1)
        goto LAB39;

LAB40:
LAB42:
LAB41:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = (t0 + 5600);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 1);

LAB43:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = (t0 + 6720);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 1);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 5200U);
    t5 = *((char **)t2);

LAB44:    t2 = ((char*)((ng3)));
    t9 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t9 == 1)
        goto LAB45;

LAB46:
LAB48:
LAB47:    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng11)));
    t7 = (t0 + 6240);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 2);

LAB49:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 5200U);
    t7 = *((char **)t2);

LAB50:    t2 = ((char*)((ng3)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 6, t2, 6);
    if (t9 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng13)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 6, t2, 6);
    if (t9 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng10)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 6, t2, 6);
    if (t9 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng7)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 6, t2, 6);
    if (t9 == 1)
        goto LAB57;

LAB58:
LAB60:
LAB59:    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng12)));
    t8 = (t0 + 7200);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 2);

LAB61:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 5200U);
    t8 = *((char **)t2);

LAB62:    t2 = ((char*)((ng3)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 6, t2, 6);
    if (t9 == 1)
        goto LAB63;

LAB64:
LAB66:
LAB65:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 472);
    t10 = *((char **)t2);
    t2 = (t0 + 6080);
    xsi_vlogvar_assign_value(t2, t10, 0, 0, 1);

LAB67:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 5200U);
    t10 = *((char **)t2);

LAB68:    t2 = ((char*)((ng14)));
    t9 = xsi_vlog_unsigned_case_compare(t10, 6, t2, 6);
    if (t9 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng15)));
    t9 = xsi_vlog_unsigned_case_compare(t10, 6, t2, 6);
    if (t9 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng17)));
    t9 = xsi_vlog_unsigned_case_compare(t10, 6, t2, 6);
    if (t9 == 1)
        goto LAB73;

LAB74:    t2 = ((char*)((ng10)));
    t9 = xsi_vlog_unsigned_case_compare(t10, 6, t2, 6);
    if (t9 == 1)
        goto LAB75;

LAB76:    t2 = ((char*)((ng9)));
    t9 = xsi_vlog_unsigned_case_compare(t10, 6, t2, 6);
    if (t9 == 1)
        goto LAB77;

LAB78:    t2 = ((char*)((ng20)));
    t9 = xsi_vlog_unsigned_case_compare(t10, 6, t2, 6);
    if (t9 == 1)
        goto LAB79;

LAB80:    t2 = ((char*)((ng8)));
    t9 = xsi_vlog_unsigned_case_compare(t10, 6, t2, 6);
    if (t9 == 1)
        goto LAB81;

LAB82:
LAB84:
LAB83:    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng21)));
    t12 = (t0 + 6880);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 3);

LAB85:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 5200U);
    t12 = *((char **)t2);

LAB86:    t2 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_compare(t12, 6, t2, 6);
    if (t9 == 1)
        goto LAB87;

LAB88:    t2 = ((char*)((ng4)));
    t9 = xsi_vlog_unsigned_case_compare(t12, 6, t2, 6);
    if (t9 == 1)
        goto LAB89;

LAB90:    t2 = ((char*)((ng3)));
    t9 = xsi_vlog_unsigned_case_compare(t12, 6, t2, 6);
    if (t9 == 1)
        goto LAB91;

LAB92:
LAB94:
LAB93:    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng1)));
    t13 = (t0 + 7040);
    xsi_vlogvar_assign_value(t13, t2, 0, 0, 2);

LAB95:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 5200U);
    t13 = *((char **)t2);

LAB96:    t2 = ((char*)((ng13)));
    t9 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t9 == 1)
        goto LAB97;

LAB98:    t2 = ((char*)((ng10)));
    t9 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t9 == 1)
        goto LAB99;

LAB100:    t2 = ((char*)((ng7)));
    t9 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t9 == 1)
        goto LAB101;

LAB102:    t2 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t9 == 1)
        goto LAB103;

LAB104:    t2 = ((char*)((ng9)));
    t9 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t9 == 1)
        goto LAB105;

LAB106:
LAB108:
LAB107:    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng1)));
    t14 = (t0 + 5760);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 2);

LAB109:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 5200U);
    t14 = *((char **)t2);

LAB110:    t2 = ((char*)((ng7)));
    t9 = xsi_vlog_unsigned_case_compare(t14, 6, t2, 6);
    if (t9 == 1)
        goto LAB111;

LAB112:
LAB114:
LAB113:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 472);
    t15 = *((char **)t2);
    t2 = (t0 + 5920);
    xsi_vlogvar_assign_value(t2, t15, 0, 0, 2);

LAB115:    goto LAB23;

LAB11:    xsi_set_current_line(186, ng0);

LAB116:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 608);
    t16 = *((char **)t2);
    t2 = (t0 + 5600);
    xsi_vlogvar_assign_value(t2, t16, 0, 0, 1);
    goto LAB23;

LAB13:    xsi_set_current_line(189, ng0);

LAB117:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 608);
    t16 = *((char **)t2);
    t2 = (t0 + 5600);
    xsi_vlogvar_assign_value(t2, t16, 0, 0, 1);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 5040U);
    t15 = *((char **)t2);

LAB118:    t2 = (t0 + 608);
    t16 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t15, 1, t16, 32);
    if (t9 == 1)
        goto LAB119;

LAB120:
LAB122:
LAB121:    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng1)));
    t16 = (t0 + 7040);
    xsi_vlogvar_assign_value(t16, t2, 0, 0, 2);

LAB123:    goto LAB23;

LAB15:    xsi_set_current_line(199, ng0);

LAB125:    xsi_set_current_line(200, ng0);
    t2 = (t0 + 608);
    t17 = *((char **)t2);
    t2 = (t0 + 5600);
    xsi_vlogvar_assign_value(t2, t17, 0, 0, 1);
    goto LAB23;

LAB17:    xsi_set_current_line(202, ng0);

LAB126:    xsi_set_current_line(203, ng0);
    t2 = (t0 + 472);
    t17 = *((char **)t2);
    t2 = (t0 + 5600);
    xsi_vlogvar_assign_value(t2, t17, 0, 0, 1);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 5200U);
    t16 = *((char **)t2);

LAB127:    t2 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t9 == 1)
        goto LAB128;

LAB129:
LAB131:
LAB130:    xsi_set_current_line(206, ng0);
    t2 = (t0 + 472);
    t17 = *((char **)t2);
    t2 = (t0 + 6560);
    xsi_vlogvar_assign_value(t2, t17, 0, 0, 1);

LAB132:    goto LAB23;

LAB19:    xsi_set_current_line(209, ng0);

LAB133:    xsi_set_current_line(210, ng0);
    t2 = (t0 + 472);
    t18 = *((char **)t2);
    t2 = (t0 + 5600);
    xsi_vlogvar_assign_value(t2, t18, 0, 0, 1);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 608);
    t17 = *((char **)t2);
    t2 = (t0 + 6080);
    xsi_vlogvar_assign_value(t2, t17, 0, 0, 1);
    goto LAB23;

LAB21:    xsi_set_current_line(213, ng0);

LAB134:    xsi_set_current_line(214, ng0);
    t2 = (t0 + 472);
    t18 = *((char **)t2);
    t2 = (t0 + 6560);
    xsi_vlogvar_assign_value(t2, t18, 0, 0, 1);
    xsi_set_current_line(215, ng0);
    t2 = (t0 + 608);
    t17 = *((char **)t2);
    t2 = (t0 + 6080);
    xsi_vlogvar_assign_value(t2, t17, 0, 0, 1);
    goto LAB23;

LAB27:    xsi_set_current_line(131, ng0);
    t5 = ((char*)((ng1)));
    t7 = (t0 + 7360);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 2);
    goto LAB33;

LAB29:    xsi_set_current_line(132, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 7360);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 2);
    goto LAB33;

LAB35:    xsi_set_current_line(136, ng0);
    t5 = (t0 + 608);
    t7 = *((char **)t5);
    t5 = (t0 + 5600);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 1);
    goto LAB43;

LAB37:    xsi_set_current_line(137, ng0);
    t5 = (t0 + 608);
    t7 = *((char **)t5);
    t5 = (t0 + 5600);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 1);
    goto LAB43;

LAB39:    xsi_set_current_line(138, ng0);
    t5 = (t0 + 608);
    t7 = *((char **)t5);
    t5 = (t0 + 5600);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 1);
    goto LAB43;

LAB45:    xsi_set_current_line(143, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 6240);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 2);
    goto LAB49;

LAB51:    xsi_set_current_line(147, ng0);
    t8 = ((char*)((ng1)));
    t10 = (t0 + 7200);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 2);
    goto LAB61;

LAB53:    xsi_set_current_line(148, ng0);
    t8 = ((char*)((ng11)));
    t10 = (t0 + 7200);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 2);
    goto LAB61;

LAB55:    xsi_set_current_line(149, ng0);
    t8 = ((char*)((ng11)));
    t10 = (t0 + 7200);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 2);
    goto LAB61;

LAB57:    xsi_set_current_line(150, ng0);
    t8 = ((char*)((ng11)));
    t10 = (t0 + 7200);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 2);
    goto LAB61;

LAB63:    xsi_set_current_line(154, ng0);
    t10 = (t0 + 608);
    t12 = *((char **)t10);
    t10 = (t0 + 6080);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 1);
    goto LAB67;

LAB69:    xsi_set_current_line(158, ng0);
    t12 = ((char*)((ng14)));
    t13 = (t0 + 6880);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 3);
    goto LAB85;

LAB71:    xsi_set_current_line(159, ng0);
    t12 = ((char*)((ng16)));
    t13 = (t0 + 6880);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 3);
    goto LAB85;

LAB73:    xsi_set_current_line(160, ng0);
    t12 = ((char*)((ng18)));
    t13 = (t0 + 6880);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 3);
    goto LAB85;

LAB75:    xsi_set_current_line(161, ng0);
    t12 = ((char*)((ng16)));
    t13 = (t0 + 6880);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 3);
    goto LAB85;

LAB77:    xsi_set_current_line(162, ng0);
    t12 = ((char*)((ng19)));
    t13 = (t0 + 6880);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 3);
    goto LAB85;

LAB79:    xsi_set_current_line(163, ng0);
    t12 = ((char*)((ng13)));
    t13 = (t0 + 6880);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 3);
    goto LAB85;

LAB81:    xsi_set_current_line(164, ng0);
    t12 = ((char*)((ng14)));
    t13 = (t0 + 6880);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 3);
    goto LAB85;

LAB87:    xsi_set_current_line(168, ng0);
    t13 = ((char*)((ng22)));
    t14 = (t0 + 7040);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 2);
    goto LAB95;

LAB89:    xsi_set_current_line(169, ng0);
    t13 = ((char*)((ng12)));
    t14 = (t0 + 7040);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 2);
    goto LAB95;

LAB91:    xsi_set_current_line(170, ng0);
    t13 = ((char*)((ng22)));
    t14 = (t0 + 7040);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 2);
    goto LAB95;

LAB97:    xsi_set_current_line(174, ng0);
    t14 = ((char*)((ng11)));
    t15 = (t0 + 5760);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 2);
    goto LAB109;

LAB99:    xsi_set_current_line(175, ng0);
    t14 = ((char*)((ng11)));
    t15 = (t0 + 5760);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 2);
    goto LAB109;

LAB101:    xsi_set_current_line(176, ng0);
    t14 = ((char*)((ng11)));
    t15 = (t0 + 5760);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 2);
    goto LAB109;

LAB103:    xsi_set_current_line(177, ng0);
    t14 = ((char*)((ng11)));
    t15 = (t0 + 5760);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 2);
    goto LAB109;

LAB105:    xsi_set_current_line(178, ng0);
    t14 = ((char*)((ng11)));
    t15 = (t0 + 5760);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 2);
    goto LAB109;

LAB111:    xsi_set_current_line(182, ng0);
    t15 = (t0 + 608);
    t16 = *((char **)t15);
    t15 = (t0 + 5920);
    xsi_vlogvar_assign_value(t15, t16, 0, 0, 2);
    goto LAB115;

LAB119:    xsi_set_current_line(192, ng0);

LAB124:    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng11)));
    t17 = (t0 + 7040);
    xsi_vlogvar_assign_value(t17, t2, 0, 0, 2);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 608);
    t16 = *((char **)t2);
    t2 = (t0 + 5600);
    xsi_vlogvar_assign_value(t2, t16, 0, 0, 1);
    goto LAB123;

LAB128:    xsi_set_current_line(205, ng0);
    t17 = (t0 + 608);
    t18 = *((char **)t17);
    t17 = (t0 + 6560);
    xsi_vlogvar_assign_value(t17, t18, 0, 0, 1);
    goto LAB132;

}


extern void work_m_00000000001408144823_4066630463_init()
{
	static char *pe[] = {(void *)Initial_68_0,(void *)Always_72_1,(void *)Always_118_2};
	xsi_register_didat("work_m_00000000001408144823_4066630463", "isim/CPUTest_isim_beh.exe.sim/work/m_00000000001408144823_4066630463.didat");
	xsi_register_executes(pe);
}
