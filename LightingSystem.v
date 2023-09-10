`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:15:26 01/31/2021 
// Design Name: 
// Module Name:    LightingSystem 
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
module LightingSystem(
   input  [ 3:0] tcode      , // time code    [table2 time code   ]
	input  [ 3:0] ulight     , // user light   [light degree mode  ]
	input  [ 3:0] lenght     , // room length  [square room lenght ]
	output [ 3:0] wshade     , // shade level  [window shade level ]
	output [ 3:0] lightnum   , // number on    [number of active   ]
	output [15:0] lightstate   // lights state [lights state decode]
);

ActiveLamps a1(tcode,ulight,lenght,lightnum);
LampState l1(lightnum,lightstate);
WindowShadeDegree w1(tcode,ulight,wshade);


endmodule
