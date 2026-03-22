`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:47:06 03/22/2026 
// Design Name: 
// Module Name:    PC 
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
module PC ( input [5:0] data_in, input load, inc, clr, clk, 
output reg [5:0] data_out );
always @( posedge clk )
if( clr ) data_out <= 6'b000_000;
else if( load ) data_out <= data_in;
else if( inc ) data_out <= data_out + 1;
endmodule
