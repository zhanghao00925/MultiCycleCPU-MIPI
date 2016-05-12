`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:36:28 05/08/2016 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
	input [31:0] DataA,
   input [31:0] DataB,
   input [2:0] Operation,
	output reg [31:0] Result,
   output Zero
   );
	assign Zero = (Result == 0) ? 1 : 0;
	always @(Operation or DataA or DataB) begin
		case (Operation)
			3'b000:Result = DataA + DataB;
			3'b001:Result = DataA - DataB;
			3'b010:Result = (DataA < DataB) ? 1:0;
			3'b011:Result = DataA >> DataB;
			3'b100:Result = DataA << DataB;
			3'b101:Result = DataA | DataB;
			3'b110:Result = DataA & DataB;
			3'b111:Result = DataA ^ DataB;
		endcase
	end
endmodule
