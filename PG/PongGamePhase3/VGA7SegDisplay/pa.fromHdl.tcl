
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name VGA7SegDisplay -dir "C:/Users/song/jjsong/ece333/ece333spring2015/lectures2015spring/lecture22SevenSegVGA/VGA7SegDisplay/planAhead_run_3" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "VGA7SegDisplayTest.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {ipcore_dir/Clock25MHzGenerator.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {DelayTimer.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {VGA7SegDisplay.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Pong_Videotimer_Game.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {LocationUpdate.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {VGA7SegDisplayTest.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top VGA7SegDisplayTest $srcset
add_files [list {VGA7SegDisplayTest.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
