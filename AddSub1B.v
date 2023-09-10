`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:57:45 01/31/2021 
// Design Name: 
// Module Name:    AddSub1B 
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
module AddSub1B(
      input a,
		input b,
		input c_in,
		input sel,
		output s,
		output co
		);
      wire T0,T1,T2,bsel,aorb;
		xor  M0(bsel,b,sel);
		xor  M1(T0,a,bsel);
		xor  M2(s,T0,c_in);
		or  M6(aorb,a,bsel);
		and  M3(T1,aorb,c_in);
		and  M4(T2,a,bsel);
		or  M5(co,T1,T2);


endmodule
