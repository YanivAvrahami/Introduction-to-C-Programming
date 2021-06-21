// ID: 302374921
// full name: Yaniv Avrahami

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

//This function gets a number 
//and prints his prime factors
void printPrimeFactors(int num);

//This function gets a number
//and returns if the number is prime or not
bool isPrime(int num);

//This function gets a number
//and returns the number smallest divisor
int smallestDivisor(int num);

int main() 
{
	int number;
	scanf("%d", &number);
	printPrimeFactors(number);
	return 0;
}

void printPrimeFactors(int num) 
{
	if (isPrime(num)) 
	{
		printf("%d", num);
	}
	else
	{
		printf("%d ", smallestDivisor(num));
		printPrimeFactors(num / smallestDivisor(num));
	}
}

bool isPrime(int num) 
{
	int i;

	if (num < 2)
		return false;

	for (i = 2; i*i <= num; i++)
		if (num % i == 0 || num % (num / i) == 0)
			return false;

	return true;
}

int smallestDivisor(int num) 
{
	int i;
	for (i = 2; i * i <= num; i++)
		if (num % i == 0)
			return i;
	return num;
}