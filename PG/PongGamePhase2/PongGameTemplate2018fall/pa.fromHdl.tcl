
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name PongGameTemplate2018fall -dir "C:/Users/song/jjsong/ece497DigitalDesign/ece433fall2018/Term Project fpga pong2018fall/PongGameTemplate2018fall/planAhead_run_1" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "PongGame2018fall.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {UniversalCounter10bitsV5.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ClockedNegativeOneShot.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {vsyncModule2108Template.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {hsyncModule2018fall.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {CRTClock2018Template.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {game_module2018fall.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {CRTcontroller2018fall.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {PongGame2018fall.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top PongGame2018fall $srcset
add_files [list {PongGame2018fall.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
