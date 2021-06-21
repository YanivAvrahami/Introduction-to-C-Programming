// ID: 302374921
// full name: Yaniv Avrahami

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAXSIZE 128

//This function gets a number and an array,
//the function translate the number into a string in the array.
void intToStr(unsigned int num, char s[]);

//This function gets a number
//and returns the first digit
int firstDigit(int num);

//This function gets a number
//and return the number without first digit
int removeFirstDigit(int num);

//This function gets a number
//and returns its length
int numLen(int num);

int main()
{
	unsigned int num;

	char* s = (char*)calloc(MAXSIZE, sizeof(char));
	scanf("%d", &num);

	// You need to write this functions according to question.
	intToStr(num, s);
	printf("%s\n", s);
}

void intToStr(unsigned int num, char s[])
{
	if (num == 0)
	{
		s[0] = '\0';
	}
	else
	{
		s[0] = firstDigit(num) + '0';
		intToStr(removeFirstDigit(num), s + 1);
	}
}

int firstDigit(int num)
{
	return (int)(num / pow(10, numLen(num) - 1.0));
}

int removeFirstDigit(int num)
{
	return num % (int)(firstDigit(num) * pow(10, numLen(num) - 1.0));
}

int numLen(int num) 
{
	int i, count = 0;

	if (num == 0)
		return 1;

	while (num > 0) 
	{
		count++;
		num /= 10;
	}

	return count;
}