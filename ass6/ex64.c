// ID: 302374921
// full name: Yaniv Avrahami

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//This function gets a number n and returns an array with size n,
//which has the first elements of the subsequent differences series
int* findNelements(int n);

void main()
{
	int n, i;
	int* arr;

	scanf("%d", &n);
	arr = findNelements(n);

	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

int* findNelements(int n)
{
	int *arr, i;

	arr = (int*)malloc(n * sizeof(int));

	arr[0] = 1;

	for (i = 1; i < n; i++)
	{
		arr[i] = arr[i - 1] + i;
	}

	return arr;
}