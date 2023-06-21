# Begin_DVE_Session_Save_Info
# DVE view(Wave.1 ) session
# Saved on Tue Jun 20 21:16:01 2023
# Toplevel windows open: 2
# 	TopLevel.1
# 	TopLevel.2
#   Wave.1: 17 signals
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
# Saved on Tue Jun 20 21:16:01 2023
# 17 signals
# End_DVE_Session_Save_Info

# DVE version: L-2016.06-SP2-15_Full64
# DVE build date: Mar 11 2018 22:07:39


#Add ncecessay scopes

gui_set_time_units 1ps

set _wave_session_group_2 Group1
if {[gui_sg_is_group -name "$_wave_session_group_2"]} {
    set _wave_session_group_2 [gui_sg_generate_new_name]
}
set Group1 "$_wave_session_group_2"

gui_sg_addsignal -group "$_wave_session_group_2" { {V1:testbench.cache_pkt} {V1:testbench.dma_pkt} {V1:testbench.DUT.data_o} {V1:testbench.DUT.dma_data_i} {V1:testbench.DUT.dma_data_o} {V1:testbench.DUT.ld_data_final_lo} {V1:testbench.DUT.ld_data_final_li} {V1:testbench.DUT.dma.dma_data_i} {V1:testbench.DUT.dma.dma_data_o} {V1:testbench.DUT.dma.dma_pkt_o} {V1:testbench.DUT.dma.out_fifo_data_li} {V1:testbench.DUT.dma.data_mem_data_i} {V1:testbench.DUT.data_mem_data_lo} {V1:testbench.DUT.data_mem_w_li} {V1:testbench.DUT.data_mem_addr_li} {V1:testbench.DUT.data_mem_data_li} {V1:testbench.DUT.data_mem_data_lo} }
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
gui_wv_zoom_timerange -id ${Wave.1} 5797890 5798684
gui_list_add_group -id ${Wave.1} -after {New Group} [list ${Group1}]
gui_list_expand -id ${Wave.1} testbench.cache_pkt
gui_list_expand -id ${Wave.1} testbench.dma_pkt
gui_list_select -id ${Wave.1} {testbench.dma_pkt.write_not_read }
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
gui_list_set_insertion_bar  -id ${Wave.1} -group ${Group1}  -item {testbench.DUT.data_mem_data_lo[0:0][63:0]} -position below

gui_marker_move -id ${Wave.1} {C1} 5798280
gui_view_scroll -id ${Wave.1} -vertical -set 0
gui_show_grid -id ${Wave.1} -enable false
#</Session>

