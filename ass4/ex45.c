// ID: 302374921
// full name: Yaniv Avrahami

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//This recursive function gets a decimal number 
//and prints its binary representation 
void printInBinary(int num);

int main() 
{
	int number;
	scanf("%d", &number);
	printInBinary(number);
	return 0;
}

void printInBinary(int num) 
{
	if (num < 2) 
	{
		printf("%d", num);
	}
	else
	{
		printInBinary(num / 2);
		printf("%d", num % 2);
	}
}