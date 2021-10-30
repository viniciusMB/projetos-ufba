#include <stdio.h>
#include "shell.h"

void executeInstruction(uint32_t instruction) {
    getUpcode(instruction);
}

void refreshPC(uint32_t add) {
    NEXT_STATE.PC = CURRENT_STATE.PC + add;
}

getUpcode(uint32_t instruction) {
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

getShamt(uint32_t instruction) {
    instruction = instruction << 21;
    return instruction >> 27;
}

getFunct(uint32_t instruction) {
    instruction = instruction << 26;
    return instruction >> 26;
}

getAdress(uint32_t instruction) {
    instruction = instruction << 6;
    return instruction >> 6;
}

getRT(uint32_t instruction) {
    instruction = instruction << 11;
    return instruction >> 27;
}

getRS(uint32_t instruction) {
    instruction = instruction << 6;
    return instruction >> 27;
}

getRD(uint32_t instruction) {
    instruction = instruction << 16;
    return instruction >> 27;
}

void add(uint32_t rs, uint32_t rt, uint32_t rd) {
    NEXT_STATE.REGS[rd] = CURRENT_STATE.REGS[rs] + CURRENT_STATE.REGS[rt];
}

void process_instruction()
{

    printf("Aqui na funcao process_instruction\n");
    /* execute one instruction here. You should use CURRENT_STATE and modify
     * values in NEXT_STATE. You can call mem_read_32() and mem_write_32() to
     * access memory. */
}
