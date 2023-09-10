`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:47:33 01/31/2021 
// Design Name: 
// Module Name:    TemperatureCalculator 
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
module TemperatureCalculator(
   input  [31:0] tc_base  ,
	input  [7:0] tc_ref   ,
	input  [15:0] adc_data ,
	output [31:0] tempc    
    );
wire [15:0] ref2;
wire [15:0] adcData;
wire [31:0] out16x16 , input32;
Multiplier8x8 mu88(tc_ref,tc_ref,ref2);
assign adcData = {1'b0,adc_data[14:0]};
Multiplier16x16 mu1616(ref2,adcData,out16x16);
// /64
assign input32 = (out16x16>>6);
AdderSubtractor32x32 add32(tc_base,input32,adc_data[15],tempc);
endmodule
