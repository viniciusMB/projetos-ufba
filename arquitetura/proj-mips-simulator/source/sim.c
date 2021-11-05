#include <stdio.h>
#include "shell.h"

void refreshPC(uint32_t add) {
    NEXT_STATE.PC = CURRENT_STATE.PC + add;
}

uint32_t getOpcode(uint32_t instruction) {
    return instruction >> 26;
}

void syscall() {
    uint32_t value = 10;
    if(CURRENT_STATE.REGS[2] == value) {
        RUN_BIT = 0;
    }
    else {
        refreshPC(4);
    }
}

uint32_t getShamt(uint32_t instruction) {
    instruction = instruction << 21;
    return instruction >> 27;
}

uint32_t getFunct(uint32_t instruction) {
    instruction = instruction << 26;
    return instruction >> 26;
}

uint32_t getAdress(uint32_t instruction) {
    instruction = instruction << 6;
    return instruction >> 6;
}

uint32_t getRT(uint32_t instruction) {
    instruction = instruction << 11;
    return instruction >> 27;
}

uint32_t getRS(uint32_t instruction) {
    instruction = instruction << 6;
    return instruction >> 27;
}

uint32_t getRD(uint32_t instruction) {
    instruction = instruction << 16;
    return instruction >> 27;
}

uint32_t getImmediate(uint32_t instruction) {
    instruction = instruction << 16;
    return instruction >> 16;
}

void addiu(uint32_t rs, uint32_t imm, uint32_t rd) {
    NEXT_STATE.REGS[rd] = CURRENT_STATE.REGS[rs] + CURRENT_STATE.REGS[imm];
}

void addu(uint32_t rs, uint32_t rt, uint32_t rd) {
    NEXT_STATE.REGS[rd] = CURRENT_STATE.REGS[rs] + CURRENT_STATE.REGS[rt];
}

void executeInstruction(uint32_t instruction) {
    uint32_t opCode = getOpcode(instruction);

    
    if ( opCode == 0b1001) {             // addiu
        uint32_t rs = getRS(instruction);
        uint32_t rd = getRD(instruction);
        uint32_t imm = getImmediate(instruction);
        addiu(rs, imm, rd);
        syscall();
    }

    if (opCode == 0b0000) {             // addu
        uint32_t rs = getRS(instruction);
        uint32_t rd = getRD(instruction);
        uint32_t rt = getRT(instruction);
        addu(rs, rt, rd);
        syscall();
    }

    

}

void process_instruction() {
    uint32_t instruction = mem_read_32(CURRENT_STATE.PC); 
    executeInstruction(instruction);
    /* execute one instruction here. You should use CURRENT_STATE and modify
     * values in NEXT_STATE. You can call mem_read_32() and mem_write_32() to
     * access memory. */
}
