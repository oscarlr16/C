#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

static bool is_pow2(uint32_t x)
{
	return (x != 0U) && ((x & (x - 1U)) == 0U);
}

int main(void)
{
	uint32_t number = 6;

	printf("%d", is_pow2(number));
	printf("\n");
	return 0;
}