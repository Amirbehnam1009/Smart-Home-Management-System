`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:10:20 01/31/2021
// Design Name:   SmartHomeSystem
// Module Name:   C:/Users/aal/Xilinx/project/SmartHomeSystem/tbSmartHomeSystem.v
// Project Name:  SmartHomeSystem
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SmartHomeSystem
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tbSmartHomeSystem;

	// Inputs
	reg arst;
	reg clk;
	reg request;
	reg confirm;
	reg gds_din;
	reg [1:0] password;
	reg [34:0] confdata;
	reg [31:0] tc_base;
	reg [15:0] adc_data;
	reg [7:0] speed;
	reg [3:0] tcode;
	reg dance_load;

	// Outputs
	wire [2:0] gds_dout;
	wire [31:0] tempc;
	wire [3:0] chs_power;
	wire chs_mode;
	wire pwm_data;
	wire [3:0] wshade;
	wire [3:0] lightnum;
	wire [15:0] lightstate;
	wire [7:0] dance_qdata;
	wire [2:0] dbg_state;

	// Instantiate the Unit Under Test (UUT)
	SmartHomeSystem uut (
		.arst(arst), 
		.clk(clk), 
		.request(request), 
		.confirm(confirm), 
		.gds_din(gds_din), 
		.gds_dout(gds_dout), 
		.password(password), 
		.confdata(confdata), 
		.tc_base(tc_base), 
		.adc_data(adc_data), 
		.tempc(tempc), 
		.speed(speed), 
		.chs_power(chs_power), 
		.chs_mode(chs_mode), 
		.pwm_data(pwm_data), 
		.tcode(tcode), 
		.wshade(wshade), 
		.lightnum(lightnum), 
		.lightstate(lightstate), 
		.dance_load(dance_load), 
		.dance_qdata(dance_qdata), 
		.dbg_state(dbg_state)
	);

	initial begin
		// Initialize Inputs
		arst = 1'b1;
		#5;
		arst = 1'b0;
		clk = 1'b0;
		request = 1'b1;
		confirm = 1'b1;
		password = 2'b00;
		confdata = 35'b10110101010110011110000010100011000;
		tc_base = 32'b00000000000000000000000000000001;
		adc_data = 16'b0011000010000001;
		speed = 8'b00000010;
		tcode = 4'b0001;
		dance_load = 1'b1;

      repeat(6)
		#20 clk=~clk;
		password = 2'b10;
		request = 1'b0;
		#5;
		request = 1'b1;
		#5;
		repeat(18)
		#20 clk=~clk;
		
		$finish; 
		// Add stimulus here

	end
      
endmodule

