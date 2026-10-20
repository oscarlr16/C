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

	printf("Enter student name: ");
	scanf("%s", student_one.name);

	printf("\nEnter student roll number: ");
	scanf("%d", &student_one.roll_number);

	printf("\nEnter student percentage: ");
	scanf("%f", &student_one.percentage);

	printf("\nStudent name: %s", student_one.name);
	printf("\nStudent roll number: %d", student_one.roll_number);
	printf("\nStudent percentage: %.1f%%\n", student_one.percentage);

	return 0;
}