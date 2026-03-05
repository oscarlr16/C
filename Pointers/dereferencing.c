#include <stdio.h>
/*
Implement the inspect_bits function that checks if given number contains 2 or more consecutive ones in its binary representation. If it does, the function should return 1. Otherwise, it should return 0.
For example, inspect_bits(13) should return 1 as it contains 2 consecutive ones in its binary representation (1101).
*/
int inspect_bits(unsigned int number)
{
    int mask = 0b11;
    while (number != 0) {
        if ((number & mask) == mask)
            return 1;
        number = number >> 1;
    }
    return 0;
}

int main(void)
{
    // Con unos consecutivos
    printf("%d\n", inspect_bits(3));   // 11  
    printf("%d\n", inspect_bits(13));  // 1101
    printf("%d\n", inspect_bits(7));   // 111 
    printf("%d\n", inspect_bits(6));   // 110 

    // Sin unos consecutivos
    printf("%d\n", inspect_bits(0));   // 0    
    printf("%d\n", inspect_bits(1));   // 1    
    printf("%d\n", inspect_bits(5));   // 101  
    printf("%d\n", inspect_bits(10));  // 1010 

    return 0;
}