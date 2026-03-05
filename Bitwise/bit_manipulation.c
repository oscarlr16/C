/*
Write three functions:
- setBit(uint8_t *byte, uint8_t position): Sets the bit at the given position
- clearBit(uint8_t *byte, uint8_t position): Clears the bit at the given position
- toggleBit(uint8_t *byte, uint8_t position): Toggles the bit at the given position

Example: If byte = 0b00001010 and position = 2
- setBit should result in: 0b00001110
- clearBit should result in: 0b00001010 (no change)
- toggleBit should result in: 0b00001110
*/

#include <stdio.h>
#include <stdint.h>

void setBit(uint8_t *byte, uint8_t position);
void clearBit(uint8_t *byte, uint8_t position);
void toggleBit(uint8_t *byte, uint8_t position);

int main(){
    uint8_t byte = 0b00001010;
    uint8_t position = 2;

    // setBit(&byte,position);
    // clearBit(&byte,position);
    toggleBit(&byte,position);

    printf("%d\n",byte);
    return 0;
}

void setBit(uint8_t *byte, uint8_t position){
    *byte |= (1<<position);
}

void clearBit(uint8_t *byte, uint8_t position){
    *byte &= ~ (1<<position);
}

void toggleBit(uint8_t *byte, uint8_t position){
    *byte ^= (1<<position);
}