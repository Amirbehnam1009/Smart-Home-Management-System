`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:03:56 01/31/2021 
// Design Name: 
// Module Name:    FanSpeed 
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
module FanSpeed(
   input        arst     , // reset [asynch]  
	input        clk      , // clock [posedge] 
	input  [7:0] speed    , // speed [duty-cycle]  
	output    reg   pwm_data   // data  [output]
);

	/* write your code here */
	reg [7:0] counter;
	 always @(posedge clk or posedge arst)
	 begin
	  if(arst)
	  begin
		counter=1'b0;
	  end
	  else 
		  begin
		  counter=counter+1;
		  if (counter==7'd257)
			 begin
				counter=1'b1;
				pwm_data=1'b1;
			 end
		  else if (counter>speed)
			 begin
				pwm_data=1'b0;
			 end
		  else	
				pwm_data=1'b1;
		 end
	 end

endmodule
