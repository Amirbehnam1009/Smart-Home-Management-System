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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000672861211_3993892700_init();
    work_m_00000000000672861211_2465691887_init();
    work_m_00000000001182194211_3972014473_init();
    work_m_00000000004138673580_3271766324_init();
    work_m_00000000000242345507_3950440041_init();
    work_m_00000000002105400228_3479608206_init();
    work_m_00000000004267443203_0018665402_init();
    work_m_00000000000087926055_0737009483_init();
    work_m_00000000003783423447_1058283003_init();
    work_m_00000000000306673242_0066619524_init();
    work_m_00000000004288324136_3447180395_init();
    work_m_00000000000015823142_2847081890_init();
    work_m_00000000003694316122_1683846897_init();
    work_m_00000000003727428832_0675365384_init();
    work_m_00000000003755430534_2382922137_init();
    work_m_00000000002980654725_2269109590_init();
    work_m_00000000004193808878_1938225339_init();
    work_m_00000000002249516991_3009872721_init();
    work_m_00000000000643190461_1179706738_init();
    work_m_00000000000928909321_0728905097_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000928909321_0728905097");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
