`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:08:57 01/31/2021 
// Design Name: 
// Module Name:    WindowShadeDegree 
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
module WindowShadeDegree(
    input  [3:0] tcode  , // time code    [table2 time code   ]
	input  [3:0] ulight , // user light   [light degree mode  ]
	output reg [3:0] wshade   // shade level  [window shade level ]
);
always @(tcode)
	begin
   if(tcode==4'b0001)
		begin
		wshade=4'b1111;
		end
	else if(tcode==4'b0010)
		begin
		wshade=4'b1100;
		end
	else if(tcode==4'b0100)
		begin
		wshade=ulight;
		end
	else
		begin
		wshade=4'b0000;
		end
	end


endmodule
