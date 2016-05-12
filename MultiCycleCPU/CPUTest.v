`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:11:22 05/10/2016
// Design Name:   CPU
// Module Name:   E:/Study/Computer Organization and Design/MultiCycleCPU/CPUTest.v
// Project Name:  MultiCycleCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CPUTest;

	// Inputs
	reg CLK;
	reg RST;
	reg [31:0] PC_Value;
	reg [31:0] Ins_Input;
	reg CLR;
	integer i;

	// Instantiate the Unit Under Test (UUT)
	CPU uut (
		.CLK(CLK), 
		.RST(RST), 
		.PC_Value(PC_Value), 
		.Ins_Input(Ins_Input), 
		.CLR(CLR)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		RST = 0;
		PC_Value = 0;
		Ins_Input = 0;
		CLR = 0;
		$stop;
		// Wait 100 ns for global reset to finish
		#100;
      RST = 1;
		CLK = 1;
		#100
		CLK = 0;
		#100;
		RST = 0;
		for (i = 0; i < 1024; i = i + 1) begin
			CLK = 1;
			#100;
			CLK = 0;
			#100;
			$stop;
		end
		// Add stimulus here
	end
      
endmodule

