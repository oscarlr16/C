/*
Write a function that swaps two integers using only bitwise XOR operator 
and pointers (no temporary variable allowed).

void swap(int *a, int *b);

Example:
int x = 5, y = 10;
swap(&x, &y);
// Now x = 10, y = 5
*/

#include<stdio.h>
#include<stdint.h>

void swap(int *a, int *b);

int main() {
    int x = 5, y = 10;
    printf("x = %d y = %d\n",x,y);
    swap(&x, &y);
    printf("x = %d y = %d\n",x,y);
}

void swap(int *a, int *b){
    *a = *a ^ *b;
    *b= *a ^ *b;
    *a = *a ^ *b;
}