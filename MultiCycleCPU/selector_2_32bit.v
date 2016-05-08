`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:16:15 05/08/2016 
// Design Name: 
// Module Name:    selector_2_32bit 
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
module selector_2_32bit(
	input [31:0] DataA,
	input [31:0] DataB,
	input selection,
	output reg [31:0] DataOut
	);
	always @(select or DataA or DataB) begin
		if (select == 0) begin // reset
			DataOut = DataA;
		end else begin
			DataOut = DataB;
		end     
	end
endmodule