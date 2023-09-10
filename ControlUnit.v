`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:44:23 01/31/2021 
// Design Name: 
// Module Name:    ControlUnit 
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
module ControlUnit(
   input         arst      , // async  reset
	input         clk       , // clock  posedge
	input         request   , // request input (asynch) 
	input         confirm   , // confirm input 
	input  [ 1:0] password  , // password from user
	input  [ 1:0] syskey    , // key  from memoty unit
	input  [34:0] configin  , // conf from user
	output reg [34:0] configout , // conf to memory unit
	output     reg   write_en  , // conf mem write enable
	output reg [ 2:0] dbg_state   // current state (debug)
	);
parameter AAA=3'b001 , BBB=3'b010 , CCC=3'b011 , DDD=3'b100, EEE=3'b101 , FFF=3'b111;
reg [0:2] prsState,nxtState;
wire equal;
PassCheckUnit p1(password,syskey,equal);
always @ (posedge clk or negedge request or posedge arst)
	 begin
    if(~request | arst) 
		begin
			prsState=AAA;
		end
	 else 
		begin
		prsState=nxtState;
		end
	  end
always @ (prsState or password or confirm or request)
	begin
	 case(prsState)
	    AAA:if(request) nxtState=BBB;else nxtState=AAA;
		 BBB:if(confirm)
			begin
			//if(password==syskey)
			if(equal)
				begin
				nxtState=CCC;
				end
			else
				begin
				nxtState=EEE;
				end
			end
		 CCC:if(confirm)
			    begin
				 nxtState=DDD;
				 end
	 endcase
	end
	
always @ (prsState or password or confirm or request or arst)
	begin
	dbg_state = prsState;
	if(arst)
		begin
		configout=35'b00000000000000000000000000000000000;
		end
	else if(prsState==CCC & confirm)
		begin
		write_en=1'b1;
		configout=configin;
		end
	else if(prsState==DDD)
		begin
		write_en=1'b1;
		end
	else
		begin
		write_en=1'b0;
		end
	end


endmodule
