`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:06:08 05/07/2016 
// Design Name: 
// Module Name:    dataReg 
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
module dataReg(
	input WE,
	input CLK,
	input [31:0]DataIn,
	output reg [31:0]DataOut
	);
	always@(negedge CLK) begin
		if (WE == 1) begin
			DataOut = DataIn;
		end
	end
endmodule
