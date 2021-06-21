// ID: 302374921
// full name: Yaniv Avrahami

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

//This function gets two numbers and returns 
//if one is the divisor of the other or not
bool isRealDivisor(int number, int divisor);

//This function gets two numbers and returns
//if both are friendly numbers or not
bool isFriendly(int number1, int number2);

//This function gets a number and returns
//if it is a perfect number or not
bool isPerfect(int number);

//This function gets a number and returns 
//the amount of real divisors.
int totalRealDivisors(int number);

//This function gets a number and returns 
//the sum of all of his real divisors
int sumRealDivisors(int number);

//This function gets three numbers and returns 
//the amount and sum of real divisors in the first number
void totalAndSumRealDivisors(int n, int *totalRealDivisors, int *sumRealDivisors);

//This function prints all perfect 
//numbers of a specific range of numbers
void printPerfectsInRange(int from, int to);

//This function prints all friendly 
//numbers in pairs of a specific range of numbers
void printFriendlyPairsInRange(int from, int to);

int main() 
{
	int m;
	scanf("%d", &m);

	printPerfectsInRange(2, m);
	printf("\n");
	printFriendlyPairsInRange(2, m);
}

bool isRealDivisor(int number, int divisor)
{
	return (number % divisor == 0);
}
bool isFriendly(int number1, int number2) {
	return (sumRealDivisors(number1) == number2) && (sumRealDivisors(number2) == number1);
}
bool isPerfect(int number) {
	int totalRealDivs;
	int sumRealDivs;
	totalAndSumRealDivisors(number, &totalRealDivs, &sumRealDivs);
	return sumRealDivs == number;
}
int totalRealDivisors(int number)
{
	int i, count = 1;
	
	for (i = 2; i*i < number; i++)
	{
		if (isRealDivisor(number, i))
			count+=2;
	}
	if (i * i == number)
		count++;
	return count;
}
int sumRealDivisors(int number) 
{
	int i, sum = 1;
	for (i = 2; i*i < number; i++) 
	{
		if (isRealDivisor(number, i))
			sum += i + number/i;
	}
	if (i * i == number)
		sum += i;
	return sum;
}
void totalAndSumRealDivisors(int n, int* totalRealDivs, int* sumRealDivs)
{
	*totalRealDivs = totalRealDivisors(n);
	*sumRealDivs = sumRealDivisors(n);
}
void printPerfectsInRange(int from, int to) 
{
	int i;
	for (i = from; i <= to; i++)
	{
		if (isPerfect(i))
			printf("%d ", i);
	}
}
void printFriendlyPairsInRange(int from, int to) {
	int i, j;
	for (i = from; i <= to; i++)
	{
		for (int j = i; j <= to; j++) 
		{
			if (isFriendly(i, j) && i != j)
				printf("%d %d\n", i, j);
		}
	}
}