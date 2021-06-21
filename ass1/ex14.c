//Yaniv Avrahami 302374921
#include <stdio.h>

int main() {
	// getting base8 as user input
	printf("Please enter a three digit base8 number and space between each digit: ");
	int base8_digit1; 
	int base8_digit2;
	int base8_digit3;
	scanf_s("%d%d%d", &base8_digit1, &base8_digit2, &base8_digit3);

	// base8 to base10
	int	base10;
	base10 = base8_digit1 * 64 + base8_digit2 * 8 + base8_digit3 * 1;

	// base10 to base3
	int base3_digit1; 
	int base3_digit2;
	int base3_digit3; 
	int base3_digit4;
	int base3_digit5;
	int base3_digit6;
	base3_digit1 = base10 % 3;
	base10 = base10 / 3;
	base3_digit2 = base10 % 3;
	base10 = base10 / 3;
	base3_digit3 = base10 % 3;
	base10 = base10 / 3;
	base3_digit4 = base10 % 3;
	base10 = base10 / 3;
	base3_digit5 = base10 % 3;
	base10 = base10 / 3;
	base3_digit6 = base10 % 3;
	base10 = base10 / 3;

	// printing base3 
	printf("This is the Base3 number: %d%d%d%d%d%d", base3_digit6, base3_digit5, base3_digit4, base3_digit3, base3_digit2, base3_digit1);
}