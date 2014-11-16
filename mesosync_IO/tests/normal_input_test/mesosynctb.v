//`include "definitions.v"
`define half_period 16
parameter bit_num_p = 5;

module mesosynctb();

logic clk, reset, reset_r, data_sent, toggle_bit,valid;
logic [bit_num_p-1:0] from_IO, from_chip;
logic [bit_num_p-1:0] to_IO, to_chip;
clk_divider_s clk_divider;
mode_cfg_s mode_cfg;
logic [$clog2(bit_num_p)-1:0] input_bit_selector;
logic [$clog2(bit_num_p)-1:0] output_bit_selector;
bit_cfg_s [bit_num_p-1:0] bit_cfg;

vcsdumper dump();


mesosyncIO #(.bit_num_p(bit_num_p),
             .log_LA_fifo_depth_p(9)
            ) dut
            (.clk(clk),
             .reset(reset_r),
             
             .clk_divider_i(clk_divider),
             .mode_cfg_i(mode_cfg),
             .input_bit_selector_i(input_bit_selector),
             .output_bit_selector_i(output_bit_selector),
             .bit_cfg_i(bit_cfg),

             .IO_i(from_IO),
             .IO_o(to_IO),

             .chip_i(from_chip),
             .chip_o(to_chip),
             .valid_o(valid),
             .data_sent_o(data_sent)
            );

always_ff@(posedge clk)
  reset_r <= reset;

assign                   from_IO[0] = 1'b1;
assign                   from_IO[1] = toggle_bit;
assign #(`half_period/2) from_IO[2] = toggle_bit;
assign #(`half_period)   from_IO[3] = toggle_bit;
assign                   from_IO[4] = 1'b0;


assign from_chip = '0;
assign clk_divider.output_clk_divider = 4'b1111;
assign clk_divider.input_clk_divider = 4'b1111;

int i;

initial begin

  $display("clk\t reset\t from_IO to_chip\t valid\t sent\t in_clk_cntr valid_r\n");
  $monitor("%b\t %b\t %b\t %b\t %b\t %b\t %d\t %b\n",clk,reset,from_IO,to_chip,valid,data_sent,dut.input_counter_r,dut.valid_r);
  for (i=0 ; i<bit_num_p; i= i+1)
    bit_cfg[i]='{clk_edge_selector:1'b0, phase: 4'b0000};
  bit_cfg[1]='{clk_edge_selector:1'b0, phase: 4'b0010};
  bit_cfg[2]='{clk_edge_selector:1'b1, phase: 4'b0010};
  bit_cfg[3]='{clk_edge_selector:1'b1, phase: 4'b0011};
  
  input_bit_selector  = 3'b001;
  output_bit_selector = 3'b011;
  mode_cfg ='{input_mode:1'b0,
              LA_enque:1'b0,
              LA_enque_mode:IDLE,
              LA_input_selector:1'b1,
              LA_input_data:2'b00,
              output_mode:STOP
             };
  reset = 1'b1;
  @ (negedge clk)
  @ (negedge clk)
  reset = 1'b0;
  @ (posedge clk)
  $display("module has been reset");
 
 
  mode_cfg ='{input_mode:1'b1,
              LA_enque:1'b0,
              LA_enque_mode:IDLE,
              LA_input_selector:1'b1,
              LA_input_data:2'b00,
              output_mode:STOP
             };

  #10000

  $stop;
end


always begin
  #`half_period clk = 1'b0;
  #`half_period clk = 1'b1;
end

always begin
  #(`half_period/2) toggle_bit = 1'b1;
  #(`half_period/2) toggle_bit = 1'b1;
  #(`half_period/2) toggle_bit = 1'b1;
  #(`half_period/2) toggle_bit = 1'b1;
  #(`half_period/2) toggle_bit = 1'b1;
  #(`half_period/2) toggle_bit = 1'b1;
  #(`half_period/2) toggle_bit = 1'b1;
  #(`half_period/2) toggle_bit = 1'b1;
  #(`half_period/2) toggle_bit = 1'b0;
  #(`half_period/2) toggle_bit = 1'b0;
  #(`half_period/2) toggle_bit = 1'b0;
  #(`half_period/2) toggle_bit = 1'b0;
  #(`half_period/2) toggle_bit = 1'b0;
  #(`half_period/2) toggle_bit = 1'b0;
  #(`half_period/2) toggle_bit = 1'b0;
  #(`half_period/2) toggle_bit = 1'b0;
end


endmodule
