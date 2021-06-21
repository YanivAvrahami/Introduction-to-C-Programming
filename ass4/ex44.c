// ID: 302374921
// full name: Yaniv Avrahami

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//This recursive function gets a number
//and returns the amount of different ways a 
//ladder with height of the number 
//can be climbed using only 1 or 2 steps
int numWays(int n);

int main() 
{
	int ladderHeight, waysNumber;
	scanf("%d", &ladderHeight);
	waysNumber = numWays(ladderHeight);
	printf("%d", waysNumber);
	return 0;
}

int numWays(int n) 
{
	if (n == 1 || n == 2) 
	{
		return n;
	}
	else
	{
		return numWays(n - 2) + numWays(n - 1);
	}
}