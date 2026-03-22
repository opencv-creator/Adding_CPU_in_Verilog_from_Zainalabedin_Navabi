`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:03:19 03/22/2026
// Design Name:   Top
// Module Name:   E:/verilog_projects/Adding_cpu/test_top.v
// Project Name:  Adding_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_top;

	// Inputs
	reg reset;
	reg clk;

	// Instantiate the Unit Under Test (UUT)
AddingCPU uut (input reset, clk, output [5:0] adr_bus, output rd_mem, wr_mem, inout [7:0] data_bus);
	
	i
	
	initial
	begin
	clk = 0;
	
	
	 data_array[0] = 8'b0000_1111;
    data_array[1] = 8'b1100_0001;
    data_array[2] = 8'b0100_1111;
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
    data_array[15] = 8'b0000_0111;
	 
	 
	forever #10 clk = ~clk;
	end

	initial begin
		// Initialize Inputs
		 $monitor("time = %t,op_code = %b, write =%b,read =%b,adr_bus = %b, data = %b",$time,uut.cpu1.cu.op_code,uut.mem1.wr_mem,uut.mem1.rd_mem,uut.mem1.adr_bus,uut.mem1.data_bus);
		#05;
		reset = 1;

		
		#1;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#1500;
		$stop;
        
		// Add stimulus here

	end
      
endmodule

