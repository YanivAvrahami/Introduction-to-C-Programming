// ID: 302374921
// full name: Yaniv Avrahami

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//This function gets an array and its size
//and returns the index of an even number 
//which after him comes an odd number
int findChange(int arr[], int n);

//This function returns if a given number is even or not
bool isEven(int num);

//This function returns if a given number is odd or not
bool isOdd(int num);

int main()
{
	int size, ans;
	scanf("%d", &size);
	int* arr = (int*)calloc(size, sizeof(int));
	for (int i = 0; i < size; i++)
	{
		scanf("%d ", &arr[i]);
	}

	ans = findChange(arr, size);
	printf("%d", ans);
}

int findChange(int arr[], int n) 
{
	int left = 0;
	int right = n - 1;
	int mid;

	while (left < right) 
	{
		mid = (left + right) / 2;

		if (isEven(arr[mid]) && isOdd(arr[mid + 1]))
		{
			return mid;
		}
		else if (isEven(arr[mid]))
		{
			left = mid;
		}
		else
		{
			right = mid;
		}
	}

}
bool isEven(int num) 
{
	return num % 2 == 0;
}
bool isOdd(int num)
{
	return num % 2 != 0;
}