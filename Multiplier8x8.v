`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:48:51 01/31/2021 
// Design Name: 
// Module Name:    Multiplier8x8 
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
module Multiplier8x8(
 input [7:0] A,
input [7:0] B,
output [15:0] P
);


assign P = A*B;


endmodule
