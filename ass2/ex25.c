// Yaniv Avrahami 302374921

/*
This program gets a positive integer as input and prints 
the amount of odd digits that are in the integer.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int positive_num;
	printf("Please enter a positive integer: ");
	scanf("%d", &positive_num);

	int odd_counter = 0;

	while (positive_num > 0) {
		int current_digit = positive_num % 10;
		if (current_digit % 2 == 1) {
			odd_counter = odd_counter + 1;
		}
		positive_num = positive_num / 10;
	}

	printf("The amount of odd digits is: %d", odd_counter);
}