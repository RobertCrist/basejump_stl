# Begin_DVE_Session_Save_Info
# DVE view(Wave.1 ) session
# Saved on Thu Jun 22 20:00:16 2023
# Toplevel windows open: 2
# 	TopLevel.1
# 	TopLevel.2
#   Wave.1: 64 signals
# End_DVE_Session_Save_Info

# DVE version: L-2016.06-SP2-15_Full64
# DVE build date: Mar 11 2018 22:07:39


#<Session mode="View" path="/mnt/users/ssd1/homes/rcrist/research/basejump_stl/testing/bsg_cache/regression_64/session.vcdplus.vpd.tcl" type="Debug">

#<Database>

gui_set_time_units 1ps
#</Database>

# DVE View/pane content session: 

# Begin_DVE_Session_Save_Info (Wave.1)
# DVE wave signals session
# Saved on Thu Jun 22 20:00:16 2023
# 64 signals
# End_DVE_Session_Save_Info

# DVE version: L-2016.06-SP2-15_Full64
# DVE build date: Mar 11 2018 22:07:39


#Add ncecessay scopes

gui_set_time_units 1ps

set _wave_session_group_6 Group1
if {[gui_sg_is_group -name "$_wave_session_group_6"]} {
    set _wave_session_group_6 [gui_sg_generate_new_name]
}
set Group1 "$_wave_session_group_6"

gui_sg_addsignal -group "$_wave_session_group_6" { {V1:testbench.cache_pkt} {V1:testbench.dma_pkt} {V1:testbench.DUT.data_o} {V1:testbench.DUT.dma_data_i} {V1:testbench.DUT.dma_data_o} {V1:testbench.DUT.ld_data_final_lo} {V1:testbench.DUT.ld_data_final_li} {V1:testbench.DUT.dma.dma_data_i} {V1:testbench.DUT.dma.dma_data_o} {V1:testbench.DUT.dma.dma_pkt_o} {V1:testbench.DUT.data_mem_w_li} {V1:testbench.DUT.data_mem_v_li} {V1:testbench.DUT.retval_op_v} {V1:testbench.DUT.ld_data_final_lo} {V1:testbench.DUT.ld_data_final_li} {V1:testbench.DUT.dma_evict_lo} {V1:testbench.DUT.miss_v} {V1:testbench.DUT.dma.dma_state_r} {V1:testbench.DUT.miss.miss_state_r} {V1:testbench.DUT.miss.chosen_way_n} {V1:testbench.DUT.miss.track_miss_i} {V1:testbench.DUT.miss.stat_info_in.dirty} {V1:testbench.DUT.miss.valid_v_i} {V1:testbench.DUT.decode_v_r.tagst_op} {V1:testbench.DUT.decode_v_r.st_op} {V1:testbench.DUT.decode_v_r.atomic_op} {V1:testbench.DUT.stat_mem_data_li.dirty} {V1:testbench.DUT.data_mem_addr_li} {V1:testbench.DUT.data_mem_data_li} {V1:testbench.DUT.data_mem_data_lo} }

set _wave_session_group_7 Group2
if {[gui_sg_is_group -name "$_wave_session_group_7"]} {
    set _wave_session_group_7 [gui_sg_generate_new_name]
}
set Group2 "$_wave_session_group_7"

gui_sg_addsignal -group "$_wave_session_group_7" { {V1:testbench.DUT.stat_mem_data_lo} {V1:testbench.DUT.stat_mem_data_li} {V1:testbench.DUT.stat_mem_addr_li} {V1:testbench.DUT.data_mem_w_mask_li} {V1:testbench.DUT.decode_v_r.st_op} {V1:testbench.DUT.decode_v_r.atomic_op} {V1:testbench.DUT.stat_mem_data_li.dirty} {V1:testbench.DUT.miss_v} {V1:testbench.DUT.decode_v_r.tagst_op} {V1:testbench.DUT.miss_stat_mem_data_lo} {V1:testbench.DUT.miss.stat_mem_data_out.dirty} {V1:testbench.DUT.miss.decode_v_i.st_op} {V1:testbench.DUT.miss.decode_v_i.atomic_op} {V1:testbench.DUT.miss.stat_mem_data_out} {V1:testbench.DUT.miss_stat_mem_data_lo} {V1:testbench.DUT.stat_mem_w_li} {V1:testbench.DUT.miss.stat_mem_data_o} {V1:testbench.DUT.miss.stat_mem_data_out} {V1:testbench.DUT.stat_mem_v_li} {V1:testbench.DUT.stat_mem_w_mask_li} }

set _wave_session_group_8 {Drivers: V1:testbench.DUT.miss.stat_mem_data_out@69030}
if {[gui_sg_is_group -name "$_wave_session_group_8"]} {
    set _wave_session_group_8 [gui_sg_generate_new_name]
}
set Group3 "$_wave_session_group_8"

gui_sg_addsignal -group "$_wave_session_group_8" { {V1:testbench.DUT.miss.stat_mem_data_out} {V1:testbench.DUT.miss.chosen_way_lru_data} {V1:testbench.DUT.miss.miss_state_r} {V1:testbench.DUT.miss.decode_v_i.atomic_op} {V1:testbench.DUT.miss.decode_v_i.st_op} }

set _wave_session_group_9 {Drivers: V1:testbench.DUT.miss_stat_mem_data_lo@0}
if {[gui_sg_is_group -name "$_wave_session_group_9"]} {
    set _wave_session_group_9 [gui_sg_generate_new_name]
}
set Group4 "$_wave_session_group_9"

gui_sg_addsignal -group "$_wave_session_group_9" { {V1:testbench.DUT.miss_stat_mem_data_lo} {V1:testbench.DUT.miss.stat_mem_data_out} }

set _wave_session_group_10 {Drivers: V1:testbench.DUT.stat_mem_data_li.dirty[0:0]@68990}
if {[gui_sg_is_group -name "$_wave_session_group_10"]} {
    set _wave_session_group_10 [gui_sg_generate_new_name]
}
set Group5 "$_wave_session_group_10"

gui_sg_addsignal -group "$_wave_session_group_10" { {V1:testbench.DUT.stat_mem_data_li.dirty} {V1:testbench.DUT.miss_stat_mem_data_lo.dirty} {V1:testbench.DUT.miss_v} {V1:testbench.DUT.decode_v_r.tagst_op} {V1:testbench.DUT.decode_v_r.atomic_op} {V1:testbench.DUT.decode_v_r.st_op} }

set _wave_session_group_11 DriversLoads
if {[gui_sg_is_group -name "$_wave_session_group_11"]} {
    set _wave_session_group_11 [gui_sg_generate_new_name]
}
set Group6 "$_wave_session_group_11"

gui_sg_addsignal -group "$_wave_session_group_11" { {V1:testbench.DUT.miss_stat_mem_data_lo} }
if {![info exists useOldWindow]} { 
	set useOldWindow true
}
if {$useOldWindow && [string first "Wave" [gui_get_current_window -view]]==0} { 
	set Wave.1 [gui_get_current_window -view] 
} else {
	set Wave.1 [lindex [gui_get_window_ids -type Wave] 0]
if {[string first "Wave" ${Wave.1}]!=0} {
gui_open_window Wave
set Wave.1 [ gui_get_current_window -view ]
}
}

set groupExD [gui_get_pref_value -category Wave -key exclusiveSG]
gui_set_pref_value -category Wave -key exclusiveSG -value {false}
set origWaveHeight [gui_get_pref_value -category Wave -key waveRowHeight]
gui_list_set_height -id Wave -height 25
set origGroupCreationState [gui_list_create_group_when_add -wave]
gui_list_create_group_when_add -wave -disable
gui_marker_set_ref -id ${Wave.1}  C1
gui_wv_zoom_timerange -id ${Wave.1} 68762 70942
gui_list_add_group -id ${Wave.1} -after {New Group} [list ${Group1}]
gui_list_add_group -id ${Wave.1} -after {New Group} [list ${Group2}]
gui_list_add_group -id ${Wave.1} -after {New Group} [list ${Group3}]
gui_list_add_group -id ${Wave.1} -after {New Group} [list ${Group4}]
gui_list_add_group -id ${Wave.1} -after {New Group} [list ${Group5}]
gui_list_add_group -id ${Wave.1} -after {New Group} [list ${Group6}]
gui_list_collapse -id ${Wave.1} ${Group3}
gui_list_collapse -id ${Wave.1} ${Group4}
gui_list_collapse -id ${Wave.1} ${Group5}
gui_list_collapse -id ${Wave.1} ${Group6}
gui_list_expand -id ${Wave.1} testbench.cache_pkt
gui_list_expand -id ${Wave.1} testbench.dma_pkt
gui_list_expand -id ${Wave.1} testbench.DUT.ld_data_final_li
gui_list_expand -id ${Wave.1} testbench.DUT.stat_mem_data_lo
gui_list_expand -id ${Wave.1} testbench.DUT.stat_mem_data_li
gui_list_expand -id ${Wave.1} testbench.DUT.miss_stat_mem_data_lo
gui_list_expand -id ${Wave.1} testbench.DUT.miss.stat_mem_data_out
gui_list_expand -id ${Wave.1} testbench.DUT.miss_stat_mem_data_lo
gui_list_select -id ${Wave.1} {testbench.DUT.miss.stat_mem_data_o }
gui_seek_criteria -id ${Wave.1} {Value...}


gui_set_pref_value -category Wave -key exclusiveSG -value $groupExD
gui_list_set_height -id Wave -height $origWaveHeight
if {$origGroupCreationState} {
	gui_list_create_group_when_add -wave -enable
}
if { $groupExD } {
 gui_msg_report -code DVWW028
}
gui_list_set_filter -id ${Wave.1} -list { {Buffer 1} {Input 1} {Others 1} {Linkage 1} {Output 1} {Parameter 1} {All 1} {Aggregate 1} {LibBaseMember 1} {Event 1} {Assertion 1} {Constant 1} {Interface 1} {BaseMembers 1} {Signal 1} {$unit 1} {Inout 1} {Variable 1} }
gui_list_set_filter -id ${Wave.1} -text {*}
gui_list_set_insertion_bar  -id ${Wave.1} -group ${Group2}  -item testbench.DUT.miss.stat_mem_data_out -position below

gui_marker_move -id ${Wave.1} {C1} 69152
gui_view_scroll -id ${Wave.1} -vertical -set 1143
gui_show_grid -id ${Wave.1} -enable false
#</Session>

