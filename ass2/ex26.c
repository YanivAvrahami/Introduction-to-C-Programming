// Yaniv Avrahami 302374921

/*
This program gets a number and index as inputs and prints
a digit of the number placed at the index place (from right to left). 
if the index is not a valid index then the program will print -1.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int number, index, i;
	int total_digits = 0;
	printf("Please enter a number and an index that represents a digit in the number: ");
	scanf("%d", &number);
	scanf("%d", &index);

	int temp = number;

	while (number != 0) {
		number = number / 10;
		total_digits++;
	}

	number = temp;

	if (index < 1 || total_digits < index) {
		printf("-1");
	} else {
		for (i = 0; i < index - 1; i++) {
			number = number / 10;
		}
		int digit = abs(number % 10);
		printf("%d", digit);
	}
}