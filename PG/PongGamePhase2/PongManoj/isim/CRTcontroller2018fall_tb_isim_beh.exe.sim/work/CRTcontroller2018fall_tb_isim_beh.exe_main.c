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
    work_m_00000000001443604142_4216367567_init();
    work_m_00000000002076269677_2104185870_init();
    work_m_00000000002422863133_4084447799_init();
    work_m_00000000001698500092_1614170950_init();
    work_m_00000000000767676564_3608765620_init();
    work_m_00000000002935602272_2604984113_init();
    work_m_00000000002115475261_4026957139_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002115475261_4026957139");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
