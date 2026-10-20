#include <stdint.h>
#include <stdio.h>

#define SET_BIT(reg, n) ((reg) | (UINT32_C(1) << (n)))
#define CLEAR_BIT(reg, n) ((reg) & ~(UINT32_C(1) << (n)))
#define TOGGLE_BIT(reg, n) ((reg) ^ (UINT32_C(1) << (n)))
#define CHECK_BIT(reg, n) (((reg) >> (n)) & UINT32_C(1))

void print_bits(uint32_t n)
{
	for (int i = 5; i >= 0; i--) {
		printf("%u", (unsigned int)((n >> i) & UINT32_C(1)));
	}
	printf("\n");
}

int main(void)
{
	uint32_t reg = 0b111000;

	reg = SET_BIT(reg, 1);
	print_bits(reg);

	reg = CLEAR_BIT(reg, 3);
	print_bits(reg);

	reg = TOGGLE_BIT(reg, 0);
	print_bits(reg);

	reg = TOGGLE_BIT(reg, 1);
	print_bits(reg);

	printf("Bit 3: %u\n", (unsigned int)CHECK_BIT(reg, 4));

	return 0;
}