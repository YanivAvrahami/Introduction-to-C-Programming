// ID: 302374921
// full name: Yaniv Avrahami

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//This function gets an array of number, its size and a variable sum.
//The function returns true if there is a subset in the array in which 
//its sum equals to the sum variable and returns false other wise.
bool subsetSum(int numbers[], int size, int sum);

int main()
{
	int size, sum;
	scanf("%d", &sum);
	scanf("%d", &size);
	int* arr = (int*)calloc(size, sizeof(int));
	for (int i = 0; i < size; i++)
	{
		scanf("%d ", &arr[i]);
	}

	// You need to write this function according to question.
	bool result = subsetSum(arr, size, sum);

	printf("%s", result ? "true" : "false");
}

bool subsetSum(int numbers[], int size, int sum)
{
	if (sum == 0)
		return true;
	
	if (size < 0 || sum < 0)
		return false;

	return subsetSum(numbers, size - 1, sum - numbers[size]) || subsetSum(numbers, size - 1, sum);
}