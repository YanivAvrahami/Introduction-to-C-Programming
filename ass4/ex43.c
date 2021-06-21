// ID: 302374921
// full name: Yaniv Avrahami

// change after back to the first function name


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

//This recursive function gets a number and a digit 
//and returns if its total digit appearances in the number is even
bool isEven(int number, int digit);

void main()
{
	int num, dig;
	bool result;

	scanf("%d%d", &num, &dig);

	result = isEven(num, dig);
	printf("%s", result ? "true" : "false");
}

bool isEven(int number, int digit) 
{
	if (number < 10)
	{
		return number != digit;
	}
	else
	{
		return isEven(number / 10, digit) == (number % 10 != digit);
	}
}