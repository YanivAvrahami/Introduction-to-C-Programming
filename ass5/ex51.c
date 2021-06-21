// ID: 302374921
// full name: Yaniv Avrahami

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_SIZE 50

//This function receives natural numbers and insert them into an array,
//and return the array size.
int read(int arr[]);

//This function gets an array and his size
//and returns the index of the longest decreasing subsequence
int indexAtLongestDecreasing(int arr[], int size);

//This function gets an array, his size and a start index
//and returns the amount of decreasing elements after the start index
int countDecreasingAtIndex(int arr[], int size, int start_index);

int main() 
{
	int arr[MAX_SIZE], arr_size;
	arr_size = read(arr);
	
	printf("%d", indexAtLongestDecreasing(arr, arr_size));
}

int read(int arr[])
{
	int num, i = 0, arr_size;
	scanf("%d", &num);

	while (num != -1) 
	{
		arr[i] = num;
		i++;
		scanf("%d", &num);
	}

	arr_size = i;

	return arr_size;
}

int indexAtLongestDecreasing(int arr[], int size)
{
	int i, longest_decreasing = 0, current_decreasing, index = 0;
	for (i = 0; i < size - 1; i++) 
	{
		current_decreasing = countDecreasingAtIndex(arr, size, i);

		if (current_decreasing > longest_decreasing) 
		{
			longest_decreasing = current_decreasing;
			index = i;
		}
	}
	return index;
}

int countDecreasingAtIndex(int arr[], int size, int start_index)
{
	int i, count = 0;
	
	for (i = start_index; i < size - 1; i++)
	{
		if (arr[i] >= arr[i + 1])
			count++;
		else
			break;
	}
	
	return count;
}