// ID: 302374921
// full name: Yaniv Avrahami

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//This function gets two strings and return the index of the last 
//appearance of the second string in the first string
char* str_last(char* str1, char* str2);

//This function gets a string and returns its length
int strLen(char str[]);

//This function gets two strings and copy one string to the other
void strCpy(char dest[], char src[]);

void main()
{
	char s1[200];
	char s2[200];
	char* result;

	scanf("%s %s", s1, s2);
	result = str_last(s1, s2);

	if (result != NULL)
		printf("%s\n", str_last(s1, s2));
	else
		printf("%s could not be found in %s", s2, s1);
}

char* str_last(char* str1, char* str2)
{
	int i, j;
	char* last_str = NULL;
	
	for (i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
	{
		if (str1[i] == str2[j])
			j++;
		else
			j = 0;

		if (j == strLen(str2)) 
		{
			last_str = (char*)malloc(sizeof(char) * strLen(str1));
			strCpy(last_str, str1 + i - j + 1);
			j = 0;
		}	
	}

	return last_str;
}

int strLen(char str[]) 
{
	int i, count = 0;
	for (i = 0; str[i] != '\0'; i++)
		count++;
	return count;
}

void strCpy(char dest[], char src[]) 
{
	int i;
	for (i = 0; src[i] != '\0'; i++) 
	{
		dest[i] = src[i];
	}
	i++;
	dest[i] = '\0';
}