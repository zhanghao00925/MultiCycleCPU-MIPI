`timescale 1ns / 1ps
`include "ALU.v"
`include "CU.v"
`include "PC.v"
`include "combine.v"
`include "dataReg.v"
`include "displace.v"
`include "extend.v"
`include "instructionMemory.v"
`include "memory.v"
`include "register.v"
`include "selector_4_32bit.v"
`include "selector_4_5bit.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:38:46 05/07/2016 
// Design Name: 
// Module Name:    CPU 
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
module CPU(
	input CLK,
	input RST,
	input [31:0] PC_Value,
	input [31:0] Ins_Input,
	input CLR
   );
	
	parameter enable = 1;
	parameter unable = 0;
	
	wire PCWre;
	wire ALUSrcB;
	wire ALUM2Reg;
	wire RegWre;
	wire WrRegData;
	wire InsMemRW;
	wire DataMemRW;
	wire IRWre;
	wire [2:0] ALUOp;
	wire [1:0] PCSrc;
	wire [1:0] RegOut;
	wire [1:0] ExtSel;
	
	wire zero;
	wire [5:0] writeReg;
	wire [31:0] PC_Input;
	wire [31:0] PC0;
	wire [31:0] PC1;
	wire [31:0] PC2;
	wire [31:0] PC3;
	wire [31:0] PC4;
	wire [31:0] PCAddResult;
	wire [31:0] Instruction;
	wire [31:0] code;
	wire [31:0] writeData;
	wire [31:0] regDataA;
	wire [31:0] regDataB;
	wire [31:0] aDataReg;
	wire [31:0] bDataReg;
	wire [31:0] ALUResult;
	wire [31:0] ALUOutReg;
	wire [31:0] ALUWriteData;
	wire [31:0] ALUM2DataReg;
	wire [31:0] memoryOut;
	wire [31:0] extendData;
	CU ContorlUnit(	
		.CLK(CLK),
		.RST(RST),
		.Zero(zero),
		.Code(code),
		.PCWre(PCWre),
		.ALUSrcB(ALUSrcB),
		.ALUM2Reg(ALUM2Reg),
		.RegWre(RegWre),
		.WrRegData(WrRegData),
		.InsMemRW(InsMemRW),
		.DataMemRW(DataMemRW),
		.IRWre(IRWre),
		.ALUOp(ALUOp),
		.PCSrc(PCSrc),
		.RegOut(RegOut),
		.ExtSel(ExtSel)
	);
	PC _PC(
		.DataInA(PC_Input),
		.DataInB(PC_Value),
		.CLK(CLK),
		.RST(RST),
		.WE(PCWre),
		.DataOut(PC0)
	);
	ALU ALUPlus4(
		.DataA(4),
		.DataB(PC0),
		.Operation(0),
		.Result(PC4),
		.Zero()
	);
	ALU ALUPlusPC(
		.DataA(PC4),
		.DataB(PC3),
		.Operation(0),
		.Result(PCAddResult),
		.Zero()
	);
	selector_4_32bit pcSelector(
		.DataA(PC4),
		.DataB(PCAddResult),
		.DataC(regDataA),
		.DataD(PC2),
		.Selection(PCSrc),
		.DataOut(PC_Input)
	);
	instructionMemory _insMem(
		.CLK(CLK),
		.RW(InsMemRW),
		.Addr(PC0),
		.DataIn(Ins_Input),
		.DataOut(Instruction)
   );
	dataReg IR(
		.WE(IRWre),
		.CLK(CLK),
		.DataIn(Instruction),
		.DataOut(code)
	);
	selector_4_5bit writeRegMux(
		.DataA(31),
		.DataB(code[20:16]),
		.DataC(code[15:11]),
		.DataD(unable),
		.Selection(RegOut),
		.DataOut(writeReg)
	);
	selector_4_32bit writeDataMux(
		.DataA(PC4),
		.DataB(ALUM2DataReg),
		.DataC(unable),
		.DataD(unable),
		.Selection(WrRegData),
		.DataOut(writeData)
	);
	register _register(
		.ReadRegA(code[25:21]),
		.ReadRegB(code[20:16]),
		.WriteReg(writeReg),
		.WriteData(writeData),
		.WE(RegWre),
		.CLK(CLK),
		.CLR(CLR),
		.ReadDataA(regDataA), 
		.ReadDataB(regDataB)
	);
	dataReg ADR(
		.WE(enable),
		.CLK(CLK),
		.DataIn(regDataA),
		.DataOut(aDataReg)
	);
	dataReg BDR(
		.WE(enable),
		.CLK(CLK),
		.DataIn(regDataB),
		.DataOut(bDataReg)
	);
	extend _extend(
		.DataIn(code[15:0]),
		.Selection(ExtSel),
		.DataOut(extendData)
	);
	displace dispalceForExtend (
		.DataIn(extendData),
		.DataOut(PC3)
	);
	displace displaceForCode(
		.DataIn(code),
		.DataOut(PC1)
	);
	combine _combine(
		.PC(PC0),
		.DataIn(PC1),
		.DataOut(PC2)
	);
	selector_4_32bit ALUInputMux(
		.DataA(bDataReg),
		.DataB(extendData),
		.DataC(unable),
		.DataD(unable),
		.Selection(ALUSrcB),
		.DataOut(ALUInputB)
	);
	ALU mainALU (
		.DataA(aDataReg),
		.DataB(ALUInputB),
		.Operation(ALUOp),
		.Result(ALUResult),
		.Zero(zero)
	);
	dataReg ALUout(
		.WE(enable),
		.CLK(CLK),
		.DataIn(ALUResule),
		.DataOut(ALUOutReg)
	);
	memory _memory(	
		.CLK(CLK),
		.RW(DataMemRW),
		.Addr(ALUoutReg),
		.DataIn(bDataReg),
		.DataOut(memoryOut)
	);
	selector_4_32bit ALUWriteMux(
		.DataA(ALUOutReg),
		.DataB(memoryOut),
		.DataC(unable),
		.DataD(unable),
		.Selection(ALUM2Reg),
		.DataOut(ALUWriteData)
	);
	dataReg ALUM2DR(
		.WE(enable),
		.CLK(CLK),
		.DataIn(ALUWriteData),
		.DataOut(ALUM2DataReg)
	);
endmodule
