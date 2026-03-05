/*
Write a function that checks if a given unsigned integer is a power of 2 
using only bitwise operators (no loops or arithmetic operations).

bool isPowerOfTwo(uint32_t n);

Examples:
- isPowerOfTwo(8) → true
- isPowerOfTwo(6) → false
- isPowerOfTwo(16) → true
*/
#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>

bool isPowerOfTwo(uint32_t n);

int main(){
    uint32_t a = 8;
    uint32_t b = 6;
    uint32_t c = 16;
    uint32_t d = 0;

    printf("%s\n",isPowerOfTwo(a) ? "true" : "false");
    printf("%s\n",isPowerOfTwo(b) ? "true" : "false");
    printf("%s\n",isPowerOfTwo(c) ? "true" : "false");
    printf("%s\n",isPowerOfTwo(d) ? "true" : "false");
    return 0;
}

bool isPowerOfTwo(uint32_t n){
    if (n==0) return false;
    return !(n & (n-1));
}