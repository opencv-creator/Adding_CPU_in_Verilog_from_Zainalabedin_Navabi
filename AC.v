`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:46:47 03/22/2026 
// Design Name: 
// Module Name:    AC 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module AC ( input [7:0] data_in, input load, clk, 
output reg [7:0] data_out );
always @( posedge clk )
if( load ) data_out <= data_in;
endmodule