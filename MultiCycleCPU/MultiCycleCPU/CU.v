`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:27:01 05/07/2016 
// Design Name: 
// Module Name:    CU 
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
module CU(
	input CLK,
	input RST,
	input Zero,
	input [5:0] Code,
	output reg PCWre,
	output reg ALUSrcB,
	output reg ALUM2Reg,
	output reg RegWre,
	output reg WrRegData,
	output reg InsMemRW,
	output reg DataMemRW,
	output reg IRWre,
	output reg [2:0] ALUOp,
	output reg [1:0] PCSrc,
	output reg [1:0] RegOut,
	output reg [1:0] ExtSel
	);
	parameter unable = 0,
				 enable = 1;
	parameter plus = 3'b000;
	parameter IF = 0,
				 ID = 1,
				 EXE1 = 6,
				 EXE2 = 5,
				 EXE3 = 2,
				 MEM = 3,
				 WB1 = 7,
				 WB2 = 4;
	parameter ADD = 6'b000000,
				 SUB = 6'b000001,
				 ADDI = 6'b000010,
				 OR = 6'b010000,
				 AND = 6'b010001,
				 ORI = 6'b010010,
				 SLL = 6'b011000,
				 MOVE = 6'b100000,
				 SLT = 6'b100111,
				 SW = 6'b110000,
				 LW = 6'b110001,
				 BEQ = 6'b110100,
				 J = 6'b111000,
				 JR = 6'b111001,
				 JAL = 6'b111010,
				 HALT = 6'b111111;
	
	reg [2:0] status;
	initial begin
		status = IF;
	end
	
	always @(posedge CLK) begin
		if (RST == 0) begin
			if (status == IF) begin
				status = ID;
			end
			else if (status == ID) begin
				case (Code)
					J: status = IF;
					JAL: status = IF;
					JR: status = IF;
					HALT: status = IF;
					SW: status = EXE3;
					LW: status = EXE3;
					BEQ: status = EXE2;
					default: status = EXE1;
				endcase
			end
			else if (status == EXE3) begin
				status = MEM;
			end
			else if (status == MEM) begin
				if (Code == SW) begin
					status = IF;
				end
				else begin
					status = WB2;
				end
			end
			else if (status == WB2) begin
				status = IF;
			end
			else if (status == EXE2) begin
				status = IF;
			end
			else if (status == EXE1) begin
				status = WB1;
			end
			else begin
				status = IF;
			end
		end
		else begin
			status = IF;
		end
	end
	
	always@(status or Zero) begin
		case (status)
			IF: begin
				PCWre = unable;
				RegWre = unable;
				InsMemRW = unable;
				DataMemRW = unable;
				IRWre = enable;
				WrRegData = 0;
				RegOut = 0;
			end
			ID: begin
				case (Code)
					SLL: ExtSel = 0;
					ORI: ExtSel = 1;
					default: ExtSel = 2;
				endcase
				case (Code)
					HALT: PCWre = unable;
					default: PCWre = enable;
				endcase
				IRWre = unable;
				case (Code)
					JAL: WrRegData = unable;
					default: WrRegData = enable;
				endcase
				case (Code)
					JAL: RegOut = 0;
					ADDI: RegOut = 1;
					ORI: RegOut = 1;
					LW: RegOut = 1;
					default: RegOut = 2;
				endcase
				case (Code)
					JAL: RegWre = enable;
					default: RegWre = unable;
				endcase
				case (Code)
					SUB: ALUOp = 3'b001;
					OR: ALUOp = 3'b101;
					AND: ALUOp = 3'b110;
					ORI: ALUOp = 3'b101;
					SLL: ALUOp = 3'b100;
					SLT: ALUOp = 3'b010;
					BEQ: ALUOp = 3'b001;
					default ALUOp = 3'b000;
				endcase
				case (Code)
					J: PCSrc = 3;
					JR: PCSrc = 2;
					JAL: PCSrc = 3;
					default: PCSrc = 0;
				endcase
				case (Code)
					ADDI: ALUSrcB = enable;
					ORI: ALUSrcB = enable;
					LW: ALUSrcB = enable;
					SW: ALUSrcB = enable;
					SLL: ALUSrcB = enable;
					default ALUSrcB = unable;
				endcase
				case (Code)
					LW: ALUM2Reg = enable;
					default: ALUM2Reg = unable;
				endcase
			end
			EXE1: begin
			end
			EXE2: begin
				case(Zero)
					enable: begin
						PCSrc = 1;
						PCWre = enable;
					end
					default: PCSrc = 0;
				endcase
			end
			EXE3: begin
			end
			MEM: begin
				DataMemRW = enable;
			end
			WB1: begin
				WrRegData = enable;
			end
			WB2: begin
				DataMemRW = unable;
				WrRegData = enable;
			end
		endcase
	end
endmodule
