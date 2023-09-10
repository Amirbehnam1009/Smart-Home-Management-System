`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:51:24 01/31/2021 
// Design Name: 
// Module Name:    Multiplier16x16 
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
module Multiplier16x16(A,B,P);
input [15:0] A;
input [15:0] B;
output [31:0] P;

assign P = A*B;


endmodule
