// ID: 302374921
// full name: Yaniv Avrahami

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

//This recursive function gets a number and 
//returns if it is decreasing or not 
bool isDecreasingSequence(int num);

void main()
{
	int num;
	bool result;

	scanf("%d", &num);

	result = isDecreasingSequence(num);
	printf("%s", result ? "true" : "false");
}

bool isDecreasingSequence(int num) 
{
	if (num < 10) 
	{
		return true;
	}
	else
	{
		return isDecreasingSequence(num / 10) && (num % 10 < (num / 10) % 10);
	}
}