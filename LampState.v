`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:16:49 01/31/2021 
// Design Name: 
// Module Name:    LampState 
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
module LampState(
  input  [ 3:0] active_lights , // number of active light
	 output reg [15:0] lights_state    // state of lights is on
);
integer i;
always @(active_lights)
	begin
	lights_state=16'b0000000000000000;
	for(i=0 ; i<active_lights ; i=i+1)
		lights_state[i]=1'b1;
	end

endmodule
