// Yaniv Avrahami 302374921

/*
This program contains two functions:
First function reverses a given number, and the second 
function tells if the number is palindrome or not.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_palindrome(int num);
int reverse_number(int num);
int number_length(int num);

int main() {
	int num, reversed_num;
	printf("Please enter a positive whole number: ");
	scanf("%d", &num);
	
	if(is_palindrome(num) == 0) {
	    printf("false");
	} else {
	    printf("true");
	}
}

int reverse_number(int num) {
	int new_number = 0;
	int num_length = number_length(num);
	int current_digit;
	while (num != 0) {
		current_digit = num % 10;

		new_number += current_digit * pow(10, num_length - 1);

		num_length--;

		num /= 10;
	}
	return new_number;
}

int number_length(int num) {
	int length = 0;
	while (num != 0) {
		length++;
		num /= 10;
	}
	return length;
}

bool is_palindrome(int num) {
	return num == reverse_number(num);
}