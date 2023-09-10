`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:18:31 01/31/2021 
// Design Name: 
// Module Name:    DFlop 
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
module DFlop(
   input  arst  , // async reset
	input  clk   , // clock posedge
	input  din   , // data  in
	input  load  , // data  load 
	output reg dout    // data  out

    );
	 
always@(posedge clk or posedge arst)
   begin
	  if(arst)
	     dout <= 1'b0;
		else if(load)
        dout <= din;
	end


endmodule
