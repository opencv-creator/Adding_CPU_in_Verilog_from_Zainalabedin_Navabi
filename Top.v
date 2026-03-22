`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:35:09 03/22/2026 
// Design Name: 
// Module Name:    Top 
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
module Top(reset, clk );
input reset,clk;

wire clk,reset,rd_mem,wr_mem;
wire [5:0] adr_bus;
wire [7:0] data_bus;


AddingCPU  cpu1(reset, clk, adr_bus, rd_mem, wr_mem, data_bus);

//RAM mem1(adr_bus,clk,reset,rd_mem,wr_mem ,data_bus );



endmodule
