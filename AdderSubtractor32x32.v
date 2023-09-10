`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:56:51 01/31/2021 
// Design Name: 
// Module Name:    AdderSubtractor32x32 
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
module AdderSubtractor32x32(
input  [31:0] A    , 
input  [31:0] B    , 
input         sel  , 
output [31:0] S  
    );
wire [31:0] co;
AddSub1B a0(A[0],B[0],sel,sel,S[0],co[0]);
AddSub1B a1(A[1],B[1],co[0],sel,S[1],co[1]);
AddSub1B a2(A[2],B[2],co[1],sel,S[2],co[2]);
AddSub1B a3(A[3],B[3],co[2],sel,S[3],co[3]);
AddSub1B a4(A[4],B[4],co[3],sel,S[4],co[4]);
AddSub1B a5(A[5],B[5],co[4],sel,S[5],co[5]);
AddSub1B a6(A[6],B[6],co[5],sel,S[6],co[6]);
AddSub1B a7(A[7],B[7],co[6],sel,S[7],co[7]);
AddSub1B a8(A[8],B[8],co[7],sel,S[8],co[8]);
AddSub1B a9(A[9],B[9],co[8],sel,S[9],co[9]);
AddSub1B a10(A[10],B[10],co[9],sel,S[10],co[10]);
AddSub1B a11(A[11],B[11],co[10],sel,S[11],co[11]);
AddSub1B a12(A[12],B[12],co[11],sel,S[12],co[12]);
AddSub1B a13(A[13],B[13],co[12],sel,S[13],co[13]);
AddSub1B a14(A[14],B[14],co[13],sel,S[14],co[14]);
AddSub1B a15(A[15],B[15],co[14],sel,S[15],co[15]);
AddSub1B a16(A[16],B[16],co[15],sel,S[16],co[16]);
AddSub1B a17(A[17],B[17],co[16],sel,S[17],co[17]);
AddSub1B a18(A[18],B[18],co[17],sel,S[18],co[18]);
AddSub1B a19(A[19],B[19],co[18],sel,S[19],co[19]);
AddSub1B a20(A[20],B[20],co[19],sel,S[20],co[20]);
AddSub1B a21(A[21],B[21],co[20],sel,S[21],co[21]);
AddSub1B a22(A[22],B[22],co[21],sel,S[22],co[22]);
AddSub1B a23(A[23],B[23],co[22],sel,S[23],co[23]);
AddSub1B a24(A[24],B[24],co[23],sel,S[24],co[24]);
AddSub1B a25(A[25],B[25],co[24],sel,S[25],co[25]);
AddSub1B a26(A[26],B[26],co[25],sel,S[26],co[26]);
AddSub1B a27(A[27],B[27],co[26],sel,S[27],co[27]);
AddSub1B a28(A[28],B[28],co[27],sel,S[28],co[28]);
AddSub1B a29(A[29],B[29],co[28],sel,S[29],co[29]);
AddSub1B a30(A[30],B[30],co[29],sel,S[30],co[30]);
AddSub1B a31(A[31],B[31],co[30],sel,S[31],co[31]);


endmodule
