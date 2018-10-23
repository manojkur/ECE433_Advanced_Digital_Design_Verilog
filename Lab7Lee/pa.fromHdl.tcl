
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Lab7Lee -dir "C:/Users/pakanalk/OneDrive - Rose-Hulman Institute of Technology/Class Files/jr_fall/ECE433/Lab7/ECE433_Advanced_Digital_Design_Verilog/Lab7Lee/planAhead_run_1" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "Lab7I2Cphase1fall2018MK_LP.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {ipcore_dir/Clock60Mhz.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../Source Files/I2C_ShiftRegister.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../Source Files/I2C_SDAmodule.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../Source Files/ClockedPositiveOneShot.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../Source Files/ClockedNegativeOneShot.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../Source Files/I2C_DataUnit.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../Source Files/I2C_Controller.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../Source Files/BaudRateGenerator.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../Source Files/Lab7I2Cphase1fall2018JJS_JJS.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top Lab7I2Cphase1fall2018MK_LP $srcset
add_files [list {Lab7I2Cphase1fall2018MK_LP.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
