`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:14:09 03/23/2026
// Design Name:   AddingCPU
// Module Name:   E:/verilog_projects/Adding_cpu/test1.v
// Project Name:  Adding_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: AddingCPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test1;

	// Inputs
	reg reset;
	reg clk;

	// Outputs
	wire [5:0] adr_bus;
	wire rd_mem;
	wire wr_mem;

	// Bidirs
	wire [7:0] data_bus;
	reg [7:0] temp11;
	reg control=0;
	
	reg [7:0] data_array [15:0];// 4 elements, each 8 bits wide

	// Instantiate the Unit Under Test (UUT)
	AddingCPU uut (
		.reset(reset), 
		.clk(clk), 
		.adr_bus(adr_bus), 
		.rd_mem(rd_mem), 
		.wr_mem(wr_mem), 
		.data_bus(data_bus)
	);
	
	
	initial
	begin
	$monitor("time = %t,op_code = %b, r=%b ,addr= %d, w =%b, data_bus = %b",$time,uut.cu.op_code,uut.cu.rd_mem, uut.adr_bus ,uut.cu.wr_mem,uut.data_bus);
	clk = 0;
	reset =0;
	#5;
	reset =1;
	#5;
	reset =0;
	
	
	
	
	 data_array[0] = 8'b0000_1111;
    data_array[1] = 8'b1100_0001;
    data_array[2] = 8'b0100_1000;
    data_array[3] = 8'b0000_0011;
    data_array[4] = 8'b0000_0101;
    data_array[5] = 8'b0000_0100;
    data_array[6] = 8'b1100_0100;
    data_array[7] = 8'b0100_1101;
    data_array[8] = 8'b1100_0100;
    data_array[9] = 8'b0100_1111;
    data_array[10] = 8'b0000_0100;
    data_array[11] = 8'b1100_0100;
    data_array[12] = 8'b0100_1111;
    data_array[13] = 8'b1100_0100;
    data_array[14] = 8'b0100_0101;
    data_array[15] = 8'b0000_1010;
	 
	 
	forever #10 clk = ~clk;
	end


	always @(posedge clk) 
	begin 
	control = 0;
	#1;
	if (rd_mem) 
	begin
	#1;
	
	control = 1;
	temp11 = data_array[adr_bus];
	end
	if (wr_mem) begin
	#1;
   data_array[adr_bus] = data_bus;
	end
	end
	
	assign data_bus = (control) ? temp11 : 8'hZZ;
      
endmodule

