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
    unisims_ver_m_00000000000339918974_1964632377_init();
    unisims_ver_m_00000000003061766309_1735969574_init();
    work_m_00000000002363902537_1358314001_init();
    work_m_00000000003374018338_2359918093_init();
    work_m_00000000003420723250_0308469717_init();
    work_m_00000000000215451542_0370447889_init();
    work_m_00000000002965273768_1982926287_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002965273768_1982926287");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
