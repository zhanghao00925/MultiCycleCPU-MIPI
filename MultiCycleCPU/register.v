`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:28:46 05/08/2016 
// Design Name: 
// Module Name:    register 
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
module register(
	input [4:0] ReadRegA,
	input [4:0] ReadRegB,
	input [4:0] WriteReg,
	input [31:0] WriteData,
	input	WE,
	input CLK,
	input CLR,
	output [31:0] ReadDataA, 
	output [31:0] ReadDataB
	);
	integer i;
	reg [31:0] mem [0:31]; // r1 - r31
	assign ReadDataA = (ReadRegA == 0)? 0 : mem[ReadRegA]; // read
	assign ReadDataB = (ReadRegB == 0)? 0 : mem[ReadRegB]; // read
	
	initial begin
		for (i = 0; i < 32; i = i + 1)
			mem[i] = 0;
	end
	always @(posedge CLK or negedge CLR) begin
		if (CLR == 0) begin // reset
			for (i = 1; i < 32; i = i + 1) begin
				mem[i] = 0;
			end
		end else begin
			if ((WriteReg != 0) && (WE == 1))
			mem[WriteReg] = WriteData;
		end
	end
endmodule
