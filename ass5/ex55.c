// ID: 302374921
// full name: Yaniv Avrahami

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//This function gets two arrays and returns
//true if in both arrays there is the same numbers (but not necessarily in same order)
//and returns false if not.
bool haveSameElems(int arr1[], int arr2[], int size);

//This function gets an array and sort it from lowest to highest
void sort(int arr[], int size);

//This function gets two numbers and swaps between their values
void swap(int *num1, int *num2);

//This function gets an array and prints it
void printArr(int arr[], int size);

int main()
{
	int* arr1;
	int* arr2;
	int size, i;
	bool ans;

	scanf("%d", &size);

	arr1 = (int*)malloc(size * sizeof(int));
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr1[i]);
	}


	arr2 = (int*)malloc(size * sizeof(int));
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr2[i]);
	}

	// You need to write this function according to question.
	ans = haveSameElems(arr1, arr2, size);

	if (ans)
		printf("true");
	else
		printf("false");
}

bool haveSameElems(int arr1[], int arr2[], int size) 
{
	if (size == 0) 
	{
		return true;
	}
	else
	{
		sort(arr1, size);
		sort(arr2, size);

		return haveSameElems(arr1 + 1, arr2 + 1, size - 1) && (arr1[0] == arr2[0]);
	}
}

void sort(int arr[], int size) 
{
	int i, j;

	for(i = 1; i < size; i++)
		for (j = 0; j < size - i; j++) 
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);

}

void swap(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void printArr(int arr[], int size)
{
	int i;
	printf("\n");
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}