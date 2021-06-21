// Yaniv Avrahami 302374921

/*
This program gets an integer between 7 and -8 as input
and prints the representation of the number in the 
Two's complement method in 4 bits.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	printf("Please enter an integer between seven and minus eight: ");
	scanf("%d", &num);

	int digit1, digit2, digit3, digit4;

	if (num >= 0) {	
		digit1 = num % 2;
		num = num / 2;

		digit2 = num % 2;
		num = num / 2;

		digit3 = num % 2;
		num = num / 2;

		digit4 = num % 2;
		num = num / 2;
	} else {
		int to_binary = 2 * 2 * 2 * 2 + num;

		digit1 = to_binary % 2;
		to_binary = to_binary / 2;

		digit2 = to_binary % 2;
		to_binary = to_binary / 2;

		digit3 = to_binary % 2;
		to_binary = to_binary / 2;

		digit4 = to_binary % 2;
		to_binary = to_binary / 2;
	}
		
	printf("%d%d%d%d", digit4, digit3, digit2, digit1);
}