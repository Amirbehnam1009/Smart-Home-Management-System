`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:58:52 01/31/2021 
// Design Name: 
// Module Name:    GasDetectorSensor 
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
   module GasDetectorSensor(arst , clk , din , dout);
	input arst;     
	input clk;      
	input din;     
	output [2:0] dout;
	reg [2:0] dout;
reg [4:0] prsState,nxtState,prsState1,nxtState1,prsState2,nxtState2;
reg [2:0] out;
parameter S0=5'b00000 , S1=5'b00001 , S2=5'b00010 , S3=5'b00011 , S4=5'b00100 , S5=5'b00101 , S6=5'b00110 , S7=5'b00111 , S8=5'b01000 , S9=5'b01001 , S10=5'b01010 , S11=5'b01011 , S12=5'b01100 , S13=5'b01101 , S14=5'b01110 , S15=5'b01111 , S16=5'b10000 , S17=5'b10001 , S18=5'b10010 , S19=5'b10011 , S20=5'b10100 , S21=5'b10101 , S22=5'b10110 , S23=5'b10111 , S24=5'b11000 , S25=5'b11001 , S26=5'b11010 , S27=5'b11011;
always @(posedge clk or posedge arst)
	begin
	if(arst)
		begin
		prsState=S0;
		prsState1=S0;
		prsState2=S0;
		end
	 else 
			begin
			prsState=nxtState;
			prsState1=nxtState1;
			prsState2=nxtState2;
			end
	end
always @(prsState or din)
	begin
	case(prsState)
		S0:if(din) nxtState=S1;else nxtState=S0;
		S1:if(din) nxtState=S1;else nxtState=S2;
		S2:if(din) nxtState=S3;else nxtState=S27;
		S3:if(din) nxtState=S5;else nxtState=S2;
		S5:if(din) nxtState=S7;else nxtState=S2;
		S7:if(din) nxtState=S1;else nxtState=S8;
		S8:if(din) nxtState=S19;else nxtState=S27;
		S19:if(din) nxtState=S5;else nxtState=S20;
		S20:if(din) nxtState=S21;else nxtState=S27;
		S21:if(din) nxtState=S5;else nxtState=S22;
		S22:if(din) nxtState=S3;else nxtState=S27;
		S27:if(din) nxtState=S1;else nxtState=S27;
	endcase
	end
	
	always @(prsState1 or din)
	begin
	case(prsState1)
		S0:if(din) nxtState1=S1;else nxtState1=S0;
		S1:if(din) nxtState1=S1;else nxtState1=S2;
		S2:if(din) nxtState1=S3;else nxtState1=S27;
		S3:if(din) nxtState1=S1;else nxtState1=S6;
		S6:if(din) nxtState1=S11;else nxtState1=S27;
		S11:if(din) nxtState1=S1;else nxtState1=S12;
		S12:if(din) nxtState1=S11;else nxtState1=S13;
		S13:if(din) nxtState1=S14;else nxtState1=S27;
		S14:if(din) nxtState1=S1;else nxtState1=S15;
		S15:if(din) nxtState1=S3;else nxtState1=S16;
		S16:if(din) nxtState1=S17;else nxtState1=S27;
		S17:if(din) nxtState1=S18;else nxtState1=S2;
		S18:if(din) nxtState1=S1;else nxtState1=S27;
		S27:if(din) nxtState1=S1;else nxtState1=S27;
	endcase
	end
	
	always @(prsState2 or din)
	begin
	case(prsState2)
		S0:if(din) nxtState2=S1;else nxtState2=S0;
		S1:if(din) nxtState2=S1;else nxtState2=S2;
		S2:if(din) nxtState2=S1;else nxtState2=S4;
		S4:if(din) nxtState2=S9;else nxtState2=S27;
		S9:if(din) nxtState2=S1;else nxtState2=S10;
		S10:if(din) nxtState2=S1;else nxtState2=S23;
		S23:if(din) nxtState2=S24;else nxtState2=S27;
		S24:if(din) nxtState2=S1;else nxtState2=S25;
		S25:if(din) nxtState2=S1;else nxtState2=S26;
		S26:if(din) nxtState2=S24;else nxtState2=S27;
		S27:if(din) nxtState2=S1;else nxtState2=S27;
	endcase
	end
always @(prsState or prsState1 or prsState2 or din)
	begin
	case(prsState)
		S0:dout[0]=1'b0;
		S21:if(~din) dout[0]=1'b1;
	endcase
	case(prsState1)
		S0:dout[1]=1'b0;
		S17:if(din) dout[1]=1'b1;
	endcase
	case(prsState2)
		S0:dout[2]=1'b0;
		S25:if(~din) dout[2]=1'b1;
	endcase
	end


endmodule
