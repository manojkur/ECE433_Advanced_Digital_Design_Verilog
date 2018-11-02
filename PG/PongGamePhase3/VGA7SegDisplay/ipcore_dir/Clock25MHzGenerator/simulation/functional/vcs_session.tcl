gui_open_window Wave
gui_sg_create Clock25MHzGenerator_group
gui_list_add_group -id Wave.1 {Clock25MHzGenerator_group}
gui_sg_addsignal -group Clock25MHzGenerator_group {Clock25MHzGenerator_tb.test_phase}
gui_set_radix -radix {ascii} -signals {Clock25MHzGenerator_tb.test_phase}
gui_sg_addsignal -group Clock25MHzGenerator_group {{Input_clocks}} -divider
gui_sg_addsignal -group Clock25MHzGenerator_group {Clock25MHzGenerator_tb.CLK_IN1}
gui_sg_addsignal -group Clock25MHzGenerator_group {{Output_clocks}} -divider
gui_sg_addsignal -group Clock25MHzGenerator_group {Clock25MHzGenerator_tb.dut.clk}
gui_list_expand -id Wave.1 Clock25MHzGenerator_tb.dut.clk
gui_sg_addsignal -group Clock25MHzGenerator_group {{Status_control}} -divider
gui_sg_addsignal -group Clock25MHzGenerator_group {Clock25MHzGenerator_tb.LOCKED}
gui_sg_addsignal -group Clock25MHzGenerator_group {{Counters}} -divider
gui_sg_addsignal -group Clock25MHzGenerator_group {Clock25MHzGenerator_tb.COUNT}
gui_sg_addsignal -group Clock25MHzGenerator_group {Clock25MHzGenerator_tb.dut.counter}
gui_list_expand -id Wave.1 Clock25MHzGenerator_tb.dut.counter
gui_zoom -window Wave.1 -full
