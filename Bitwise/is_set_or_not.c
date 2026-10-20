/*
Write a C program to input any number from user and check whether the Least
Significant Bit (LSB) of the given number is set (1) or not (0). How to check
whether the least significant bit of a numbers set or unset using bitwise
operator in C programming. C program to get the status of least significant bit
of a number.
*/
#include <stdio.h>
#include <stdint.h>

#define MASK_IS_SET (1UL << 0)

int main(void)
{
	uint16_t number = 0;
	printf("Enter a number: ");

	scanf("%hu", &number);

	if (number & MASK_IS_SET) {
		printf("\nThe LSB is set 1");
	} else {
		printf("\nThe LSB is set 0");
	}

	printf("\n");
	return 0;
}