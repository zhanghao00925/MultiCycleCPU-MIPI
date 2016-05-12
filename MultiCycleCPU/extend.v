`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:12:13 05/07/2016 
// Design Name: 
// Module Name:    extend 
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
module extend(
	input [15:0] DataIn,
	input [1:0]	Selection,
   output reg [31:0] DataOut
   );
	always @(Selection or DataIn) begin
		if (Selection == 0)
			DataOut = {{27{1'b0}}, DataIn[15:11]};
		else if (Selection == 1)
			DataOut = {{16{1'b0}}, DataIn[15:0]};
		else if (Selection == 2)
			DataOut = {{16{DataIn[15]}}, DataIn[15:0]};
	end
endmodule
