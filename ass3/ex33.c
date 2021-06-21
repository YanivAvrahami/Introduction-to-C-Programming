// Yaniv Avrahami 302374921

/*
This program gets a positive base eight number 
as input and prints its base 10 representation
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int current_digit, base10;
	char ch;
	
	printf("Please enter a positive base eight number: ");
	
	scanf("%c", &ch);

	current_digit = ch - '0';
	base10 = current_digit;

	scanf("%c", &ch);

	while (ch != '\n') {
		current_digit = ch - '0';
		base10 = base10 * 8 + current_digit;;
		scanf("%c", &ch);
	}

	printf("%d", base10);
}