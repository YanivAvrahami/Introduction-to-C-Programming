// ID: 302374921
// full name: Yaniv Avrahami

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//This function gets an array and
//returns if the array is symetric or not
bool isSymetric(int* arr, int size);

void main()
{
	int* arr;
	int size, i;
	bool result;

	scanf("%d", &size);
	arr = (int*)calloc(size, sizeof(int));

	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	result = isSymetric(arr, size);
	printf("%s", result ? "true" : "false");
}

bool isSymetric(int* arr, int size) 
{
	if (size == 0 || size == 1) 
	{
		return true;
	}
	else
	{
		return isSymetric(arr + 1, size - 2) && (arr[0] == arr[size - 1]);
	}
}
