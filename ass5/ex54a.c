// ID: 302374921
// full name: Yaniv Avrahami

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//This function gets an array, and returns the maximum 
//and minimum values between left and right.
void minMax(int arr[], int left, int right, int *min, int *max);

int main()
{
	int min = 0, max = 0, size, left, right;

	scanf("%d", &left);
	scanf("%d", &right);
	scanf("%d", &size);
	int* arr = (int*)calloc(size, sizeof(int));
	for (int i = 0; i < size; i++)
	{
		scanf("%d ", &arr[i]);
	}

	// You need to write this functions according to question.
	minMax(arr, left, right, &min, &max);
	printf("%d ", min);
	printf("%d ", max);
}

void minMax(int arr[], int left, int right, int* min, int* max) 
{
	if (left == right) 
	{
		*min = left;
		*max = left;
	}
	else
	{
		minMax(arr, left, right - 1, min, max);
		
		if (arr[right] > *max) 
		{
			*max = arr[right];
		}

		if (arr[right] < *min) 
		{
			*min = arr[right];
		}
		
	}
}