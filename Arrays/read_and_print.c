/*
Write a C program that prompts the user to enter the size of an integer array,
reads that many integer elements from the user, and then prints all the stored
elements back to the console.
*/

#include <stdint.h>
#include <stdio.h>

int main(void)
{
	int array_size = 0;

	printf("Enter the number of elemnts (size or array): \n");
	scanf("%d", &array_size);

	int arr[array_size];
	int elemnt_value = 0;

	printf("Enter %d elements: \n", array_size);
	for (int i = 0; i < array_size; i++) {
		scanf("%d", &elemnt_value);
		arr[i] = elemnt_value;
	}

	for (int i = 0; i < array_size; i++) {
		printf("Element %d: %d \n", i + 1, arr[i]);
	}

	return 0;
}