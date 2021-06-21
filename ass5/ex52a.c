// ID: 302374921
// full name: Yaniv Avrahami

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

//This function remove all odd numbers from an array
void removeOdd(int arr[], int* size);

//This function swaps the values between two numbers
void swap(int* num1, int* num2);

//This function removes a value from an array and shift
//all elements left.
void removeCell(int arr[], int *size, int index);

//This funtion counts the amount of odd numbers in an array
int countOdds(int arr[], int size);

//This function prints an array
void printArr(int arr[], int size);

int main()
{
	int size, i;
	int* arr;

	scanf("%d", &size);
	arr = (int*)malloc(size * sizeof(int));
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	removeOdd(arr, &size);
	printArr(arr, size);
}

void removeOdd(int arr[], int* size)
{
	int i = 0, total_odds;
	total_odds = countOdds(arr, *size);

	while (total_odds > 0) 
	{
		if (arr[i] % 2 != 0) 
		{
			removeCell(arr, size, i);
			total_odds--;
		}
		else 
		{
			i++;
		}
	}
}

void swap(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void removeCell(int arr[], int *size, int target_index) 
{
	int i, arr_size = *size;
	
	for (i = target_index; i < arr_size - 1; i++) 
	{
		arr[i] = arr[i + 1];
	}

	arr_size--;
	*size = arr_size;
}

int countOdds(int arr[], int size) 
{
	int i, count = 0;

	for (i = 0; i < size; i++) 
		if (arr[i] % 2 != 0)
			count++;

	return count;
}

void printArr(int arr[], int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}