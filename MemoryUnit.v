`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:43:18 01/31/2021 
// Design Name: 
// Module Name:    MemoryUnit 
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
module MemoryUnit(
   input         arst , 
	input         clk  ,
	input         wren , 
	input  [34:0] din  , 
	output reg [34:0] dout   
    );
always @(posedge clk or posedge arst)
	if(arst)
		begin
		dout=35'b00000000000000000000000000000000000;
		end
		else if(wren)
		begin
		dout=din;
		end

endmodule
