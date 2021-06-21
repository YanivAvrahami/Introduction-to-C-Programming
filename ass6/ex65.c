// ID: 302374921
// full name: Yaniv Avrahami

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct cell
{
	int val;
	int place;
};

typedef struct cell CELL;

//This function gets an array and returns a new array 
//with all the ruling elements of the array
CELL* findRuling(int nums[], int size, int* resSizePtr);

void main()
{
	int* arr;
	int size, i;
	int resSizePtr = 0;
	CELL* rulingArr;

	scanf("%d", &size);
	arr = (int*)malloc(size * sizeof(int));

	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	rulingArr = findRuling(arr, size, &resSizePtr);

	if (resSizePtr == 0)
		printf("NULL");
	else
	{
		for (i = 0; i < resSizePtr; i++)
		{
			printf("%d ", rulingArr[i].val);
			printf("%d ", rulingArr[i].place);
		}
	}
}

CELL* findRuling(int nums[], int size, int* resSizePtr)
{
	int i, count = 0;

	*resSizePtr = 0;

	CELL* rulers = NULL;

	int max = nums[0];

	for (i = 1; i < size; i++)
	{
		if (nums[i] > max) 
		{
			CELL newRuler;
			newRuler.place = i;
			newRuler.val = nums[i];
			rulers = realloc(rulers, count + 1);
			rulers[count] = newRuler;
			count++;

			max = nums[i];
		}
	}

	*resSizePtr = count;

	return rulers;
}