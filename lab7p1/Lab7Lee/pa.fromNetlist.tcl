
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name Lab7Lee -dir "C:/Users/pakanalk/OneDrive - Rose-Hulman Institute of Technology/Class Files/jr_fall/ECE433/Lab7/ECE433_Advanced_Digital_Design_Verilog/Lab7Lee/planAhead_run_2" -part xc6slx16csg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/pakanalk/OneDrive - Rose-Hulman Institute of Technology/Class Files/jr_fall/ECE433/Lab7/ECE433_Advanced_Digital_Design_Verilog/Lab7Lee/Lab7I2Cphase1fall2018MK_LP.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/pakanalk/OneDrive - Rose-Hulman Institute of Technology/Class Files/jr_fall/ECE433/Lab7/ECE433_Advanced_Digital_Design_Verilog/Lab7Lee} {ipcore_dir} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "Lab7I2Cphase1fall2018MK_LP.ucf" [current_fileset -constrset]
add_files [list {Lab7I2Cphase1fall2018MK_LP.ucf}] -fileset [get_property constrset [current_run]]
link_design
