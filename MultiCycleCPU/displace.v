`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:20:41 05/07/2016 
// Design Name: 
// Module Name:    displace 
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
module displace(
   input [31:0] DataIn,
   output [31:0] DataOut
   );
	assign DataOut = DataIn << 2;
endmodule
