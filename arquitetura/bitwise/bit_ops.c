#include <stdio.h>
#include "bit_ops.h"

// Return the nth bit of x.
// Assume 0 <= n <= 31
unsigned get_bit(unsigned x,
                 unsigned n) {

    int response = ((x >> n) & 1);
 
    return response;
}
// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(unsigned * x,
             unsigned n,
             unsigned v) {

    // Making this mask is necessary when the nth bit is 1 and v is 0
    int mask = ~(1 << n);

    int bit_changer = v << n;  
    
    *x = ((*x & mask) | bit_changer);
    
}
// Flip the nth bit of the value of x.
// Assume 0 <= n <= 31
void flip_bit(unsigned * x,
              unsigned n) {

    int mask = 1 << n;
    *x = (*x  ^ mask);
    
}

