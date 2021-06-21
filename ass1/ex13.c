//Yaniv Avrahami 302374921
#include <stdio.h>

int main() {
	int num;
	int digit1, digit2, digit3, digit4;
	printf("Please enter a number between 0 to 7: ");
	scanf_s("%d", &num);
	
	digit1 = num % 2;
	num = num / 2;

	digit2 = num % 2;
	num = num / 2;

	digit3 = num % 2;
	num = num / 2;

	digit4 = num % 2;
	num = num / 2;

	printf("%d%d%d%d", digit4, digit3, digit2, digit1);
}