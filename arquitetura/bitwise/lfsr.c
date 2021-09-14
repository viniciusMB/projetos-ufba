#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    // this bit will be used to change the register last bit
    uint16_t xor_bit;

    // making the XOR operations with 0 2 3 5
    xor_bit = (((((*reg >> 0) ^ (*reg >> 2)) ^ (*reg >> 3)) ^ (*reg >> 5)));

    // shifting the register 1 bit to the right and changing the msb to xor_bit value 
    *reg = (*reg >> 1) | (xor_bit << 15);
  
   


}



