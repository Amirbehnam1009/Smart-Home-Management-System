`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:40:26 01/31/2021 
// Design Name: 
// Module Name:    SmartHomeSystem 
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
module SmartHomeSystem(
   input  arst      , // async  reset
	input  clk       , // clock  posedge
	input  request,
	input  confirm,
	input  gds_din   , // gas detector input
	output [2:0 ] gds_dout   , // gas detector output
	input  [ 1:0] password,
	input  [34:0] confdata,
	input  [31:0] tc_base,
	input  [15:0] adc_data,
	output [31:0] tempc,
	input  [ 7:0] speed,
	output [ 3:0] chs_power,
	output        chs_mode,
	output        pwm_data,
	input  [ 3:0] tcode,
	output [ 3:0] wshade,
	output [ 3:0] lightnum,
	output [15:0] lightstate,
	input         dance_load,
	output [ 7:0] dance_qdata,
	output [ 2:0] dbg_state
	);
	
	wire [ 7:0] tc_ref;
	wire [ 7:0] chs_conf;
	wire [ 3:0] ulight;
	wire [ 3:0] lenght;
	wire [ 7:0] dance_pdata;
	wire        dance_din;
	wire        mem_wren;
	wire [34:0] mem_in;
	wire [34:0] mem_out;
	wire [ 1:0] syskey;
	
	assign tc_ref = mem_out[7:0];
	assign chs_conf = mem_out[15:8];
	assign lenght = mem_out[23:20];
	assign ulight = mem_out[19:16];
	assign dance_din = mem_out[32];
	assign dance_pdata = mem_out[31:24];
	assign syskey = mem_out[34:33] ;
	
	TemperatureCalculator t1(tc_base,tc_ref,adc_data,tempc);
	GasDetectorSensor g1(arst,clk,gds_din,gds_dout);
	CoolHeatSystem c1(arst,clk,speed,chs_conf,chs_power,chs_mode,pwm_data);
	LightingSystem l1(tcode,ulight,lenght,wshade,lightnum,lightstate);
	LightDance l2(arst,clk,dance_din,dance_load,dance_pdata,dance_qdata);
	ControlUnit c2(arst,clk,request,confirm,password,syskey,confdata,mem_in,mem_wren,dbg_state);
	MemoryUnit m1(arst,clk,mem_wren,mem_in,mem_out);
	
endmodule
