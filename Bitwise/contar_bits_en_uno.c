
#include <stdio.h>
#include <stdint.h>

uint32_t count_set_bits(uint32_t num)
{
	uint32_t count = 0U;

	while (num != 0U) {
		if ((num & UINT32_C(1)) != 0U) {
			count++;
		}

		num >>= 1U;
	}

	return count;
}

int main(void)
{
	uint32_t num = 1584U;

	printf("Number of set bits: %u\n", (unsigned int)count_set_bits(num));

	return 0;
}
