`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:23:58 05/07/2016 
// Design Name: 
// Module Name:    combine 
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
module combine(
	input [31:0] PC,
	input [31:0] DataIn,
	output reg [31:0] DataOut
   );
	always @(PC or DataIn) begin
		DataOut = {PC[31:28], DataIn[27:2], 2'b00};
	end
endmodule
