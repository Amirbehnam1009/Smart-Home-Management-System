`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:03:08 01/31/2021 
// Design Name: 
// Module Name:    ModePower 
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
module ModePower(
   input  [7:0] chs_conf  , // degree [temprature] 
	output reg [3:0] chs_power , // power  [cooler/heater] 
	output reg chs_mode    // model  [heat=1/cool=0]
);

	integer i;

	always@(chs_conf)
	begin
		 chs_power = 0;
		 for(i=0;i<8;i=i+1)
			  if(chs_conf[i] == 1'b1)
					chs_power = chs_power + 1;
		 if(chs_power == 1)
				chs_mode = 1'b1;
		 else if(chs_power == 3)
				chs_mode = 1'b1;
		 else if(chs_power == 5)
				chs_mode = 1'b1;
		 else if(chs_power == 7)
				chs_mode = 1'b1;
		 else
				chs_mode = 0;
	end


endmodule
