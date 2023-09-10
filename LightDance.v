`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:17:54 01/31/2021 
// Design Name: 
// Module Name:    LightDance 
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
module LightDance(
   input        arst  , // async  reset
	input        clk   , // clock  posedge
	input        din   , // input  data
	input        load  , // load   enable 
	input  [7:0] pdata , // load   data
	output [7:0] qdata   // output data
);

wire loadnot,xord,xorq6,xorq5,xorq2,xorq1;
wire [7:0] inputFF,dinAnd,pAnd;
not n1(loadnot,load);
xor x1(xord,din,qdata[0]);
xor x2(xorq6,qdata[6],qdata[0]);
xor x3(xorq5,qdata[5],qdata[0]);
xor x4(xorq2,qdata[2],qdata[0]);
xor x5(xorq1,qdata[1],qdata[0]);
and a7(pAnd[7],pdata[7],load);
and a6(pAnd[6],pdata[6],load);
and a5(pAnd[5],pdata[5],load);
and a4(pAnd[4],pdata[4],load);
and a3(pAnd[3],pdata[3],load);
and a2(pAnd[2],pdata[2],load);
and a1(pAnd[1],pdata[1],load);
and a0(pAnd[0],pdata[0],load);

and a77(dinAnd[7],xord,loadnot);
and a66(dinAnd[6],qdata[7],loadnot);
and a55(dinAnd[5],xorq6,loadnot);
and a44(dinAnd[4],xorq5,loadnot);
and a33(dinAnd[3],qdata[4],loadnot);
and a22(dinAnd[2],qdata[3],loadnot);
and a11(dinAnd[1],xorq2,loadnot);
and a00(dinAnd[0],xorq1,loadnot);

or o7(inputFF[7],pAnd[7],dinAnd[7]);
or o6(inputFF[6],pAnd[6],dinAnd[6]);
or o5(inputFF[5],pAnd[5],dinAnd[5]);
or o4(inputFF[4],pAnd[4],dinAnd[4]);
or o3(inputFF[3],pAnd[3],dinAnd[3]);
or o2(inputFF[2],pAnd[2],dinAnd[2]);
or o1(inputFF[1],pAnd[1],dinAnd[1]);
or o0(inputFF[0],pAnd[0],dinAnd[0]);

DFlop d7(arst,clk,inputFF[7],1'b1,qdata[7]);
DFlop d6(arst,clk,inputFF[6],1'b1,qdata[6]);
DFlop d5(arst,clk,inputFF[5],1'b1,qdata[5]);
DFlop d4(arst,clk,inputFF[4],1'b1,qdata[4]);
DFlop d3(arst,clk,inputFF[3],1'b1,qdata[3]);
DFlop d2(arst,clk,inputFF[2],1'b1,qdata[2]);
DFlop d1(arst,clk,inputFF[1],1'b1,qdata[1]);
DFlop d0(arst,clk,inputFF[0],1'b1,qdata[0]);


endmodule
