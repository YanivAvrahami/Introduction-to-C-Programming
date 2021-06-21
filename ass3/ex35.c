// Yaniv Avrahami 302374921

/*
This program got a function which take two positive whole numbers 
and returns true if the first number is contained in the second number
else it returns false.
*/

#include <stdio.h>
#include <stdbool.h>

bool isNumberInsideNumber(int number1, int number2);
bool isEqual(int number1, int number2);

int main()
{
	int number1 = 13377399;
	int number2 = 23423;
	
	if (isNumberInsideNumber(number1, number2) == true)
		printf("true");
	else
		printf("false");

}

bool isNumberInsideNumber(int number1, int number2)
{
	while (number1 != 0)
	{
		if (isEqual(number1, number2))
			return true;

		number1 /= 10;
	}

	return false;
}

bool isEqual(int number1, int number2)
{
	while (number2 != 0)
	{
		if (number1 % 10 != number2 % 10)
			return false;

		number1 /= 10;
		number2 /= 10;
	}

	return true;
}
