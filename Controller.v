`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:50:03 03/22/2026 
// Design Name: 
// Module Name:    Controller 
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
    // Define states using localparam
    `define Reset 2'b00
    `define Fetch 2'b01
     `define Decode 2'b10
	 `define Execute 2'b11

module Controller ( input reset, clk, input [1:0] op_code,
output reg rd_mem, wr_mem, ir_on_adr,
pc_on_adr, dbus_on_data,
data_on_dbus, ld_ir, ld_ac,
ld_pc, inc_pc, clr_pc,
pass, add, alu_on_dbus);





reg [1:0] present_state, next_state;

always @( posedge clk ) 
begin
if( reset ) 
present_state <= `Reset;
else 
present_state <= next_state;
end

always @( present_state or reset ) 
begin 
rd_mem=1'b0; wr_mem=1'b0; ir_on_adr=1'b0; pc_on_adr=1'b0;
dbus_on_data=1'b0; data_on_dbus=1'b0; ld_ir=1'b0;
ld_ac=1'b0; ld_pc=1'b0; inc_pc=1'b0; clr_pc=1'b0;
pass=0; add=0; alu_on_dbus=1'b0;

case ( present_state )

`Reset: begin 
next_state = reset ? `Reset : `Fetch;
clr_pc = 1;
end // End `Reset

`Fetch : begin next_state = `Decode;
pc_on_adr = 1; rd_mem = 1; data_on_dbus = 1; 
ld_ir = 1; inc_pc = 1;
end // End `Fetch

`Decode : next_state = `Execute; // End `Decode
`Execute: 
begin 
next_state = `Fetch;

case( op_code )
2'b00: begin
ir_on_adr = 1; rd_mem = 1;
data_on_dbus = 1; ld_ac = 1;
end

2'b01: begin
pass = 1;
ir_on_adr = 1; alu_on_dbus = 1;
dbus_on_data = 1; wr_mem = 1;
end 

2'b10: ld_pc = 1;

2'b11: begin
add = 1; alu_on_dbus = 1; ld_ac = 1;
end
endcase

end // End `Execute
default : next_state = `Reset;
endcase
end
      
endmodule