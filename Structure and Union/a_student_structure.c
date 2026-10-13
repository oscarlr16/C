#include <stdint.h>
#include <stdio.h>

struct Student {
	char name[20];
	int roll_number;
	float percentage;
};

int main(void)
{
	struct Student student_one = {
	    .name = "", .roll_number = 0, .percentage = 75};

	return 0;
}