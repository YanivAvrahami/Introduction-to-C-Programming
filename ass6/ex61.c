// ID: 302374921
// full name: Yaniv Avrahami

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define MAX_LEN 254
#define MAX_LINE 100

#pragma region Requested Function Declarations

//This function gets a string
//and returns if the string is a palindrome or not
bool isPalindrome(char str[]);

//This function gets a string
//and switch between consecutive chars
void switchLetters(char str[]);

//This function gets a string and a char
//and returns a new string without the char apearances
void removeChar(char str[], char ch);

//This function gets two strings (s1 and s2) 
//and returns the index of the first element of s2 in s1
int strStr(char str1[], char str2[]);

//This function gets a string that is a whole number, 
//and returns the integer form of the string  
int string2Integer(char str[]);

#pragma endregion


#pragma region Util Function Declarations 

//This function reads string input into an array
void scanStr(char str[]);

//This function reads strings input into an 2d array
void scanText(char text[][MAX_LEN]);

//This function copy a string into an other string
void copyStr(char src[], char dest[]);

//This function gets a string
//and returns the length of it
int strLen(char str[]);

//This function gets a text
//and returns the length of it
int textLen(char text[][MAX_LEN]);

//This function gets a text and an index
//and removes the line at index
void removeLine(char text[][MAX_LEN], int ind);

//This function prints an array of strings
void printText(char text[][MAX_LEN]);

//This function gets a text
//and prints it reversed
void printTextReversed(char text[][MAX_LEN]);

//This function gets a string and two indexes,
//and swaps between the two elements in those indexes
void swap1(char str[], int ind1, int ind2);

//This function gets two strings,
//and swaps between their data
void swap2(char str1[], char str2[]);

//This function gets a string and a char
//and returns the amount of times the char is in the string
int countChar(char str[], char ch);

#pragma endregin

int main()
{
	char text[MAX_LINE][MAX_LEN];
	int num;
	int i;

	scanText(text);

	removeChar(text[0], ' ');

	if (!isPalindrome(text[1]))
		switchLetters(text[1]);

	num = string2Integer(text[2]);

	for (i = 3; text[i][0] != '\n'; i++)
	{
		if (strStr(text[i], "new") != -1) 
		{
			removeLine(text, i);
			i = i - 1;
		}
	}

	printf("%d\n", num);
	
	printTextReversed(text);

}

#pragma region Requested Function Definitions

bool isPalindrome(char str[])
{
	int i;
	for (i = 0; str[i] != '\n'; i++)
	{
		if (str[i] != str[strLen(str) - i - 2])
			return false;
	}
	
	return true;
}

void switchLetters(char str[])
{
	int i;
	if (strLen(str) % 2 == 1) 
	{
		for (i = 0; str[i] != '\n'; i += 2)
			swap1(str, i, i + 1);
	}
	else 
	{
		for (i = 0; str[i+1] != '\n'; i += 2)
			swap1(str, i, i + 1);
	}
	
}

void removeChar(char str[], char ch)
{
	int i, j;
	int numChar = countChar(str, ch);

	for (j = 0; j < numChar; j++) 
	{
		for (i = 0; str[i + 1] != '\0'; i++)
		{
			if (str[i] == ch)
			{
				swap1(str, i, i + 1);
			}
		}
	}

}

int strStr(char str1[], char str2[])
{
	int i, j;

	for (i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
	{
		if (str1[i] == str2[j])
			j++;
		else
			j = 0;

		if (j == strLen(str2))
			return i - j + 1;
	}

	return -1;
}

int string2Integer(char str[])
{
	int i, num = 0, dig, dig_place, dig_weight;

	for (i = 0; str[i] != '\n'; i++) 
	{
		dig = str[i] - '0';
		dig_place = strLen(str) - i -1;
		dig_weight = dig * pow(10, dig_place - 1.0);
		num += dig_weight;
	}

	return num;
}

#pragma endregion

#pragma region Util Function Definitions

void scanStr(char str[])
{
	int i;
	char c;

	scanf("%c", &c);

	if (c == '\n') {
		str[0] = '\n';
		str[1] = '\0';
	} else {
		str[0] = c;
		scanf("%c", &c);
		for (i = 1; c != '\n'; i++)
		{
			str[i] = c;
			scanf("%c", &c);
		}
		str[i] = '\n';
		str[i + 1] = '\0';
	}

}

int strLen(char str[]) 
{
	int i, count = 0;
	for (i = 0; str[i] != '\0'; i++)
		count++;
	return count;
}

void copyStr(char src[], char dest[])
{
	int i;
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
}

void scanText(char text[][MAX_LEN])
{
	int i;
	char str[MAX_LEN];
	scanStr(str);

	for (i = 0; str[0] != '\n'; i++)
	{
		copyStr(str, text[i]);
		scanStr(str);
	}

	copyStr(str, text[i]);
}

int textLen(char text[][MAX_LEN]) 
{
	int count = 0, i;
	for (i = 0; text[i][0] != '\n'; i++)
	{
		count++;
	}
	return count;
}

void printText(char text[][MAX_LEN])
{
	int i;
	for (i = 0; text[i][0] != '\n'; i++)
		printf("%s", text[i]);
}

void swap1(char str[], int ind1, int ind2)
{
	char temp = str[ind1];
	str[ind1] = str[ind2];
	str[ind2] = temp;
}

void swap2(char str1[], char str2[])
{
	char* temp = (char*)malloc((strLen(str1) + 1) * sizeof(char));
	copyStr(str1, temp);
	copyStr(str2, str1);
	copyStr(temp, str2);
	free(temp);
}

int countChar(char str[], char ch)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ch)
			count++;
	}

	return count;
}

void printTextReversed(char text[][MAX_LEN])
{
	int i;
	int size = textLen(text);

	for (i = size - 1; i >= 0; i--)
		printf("%s", text[i]);

}

void removeLine(char text[][MAX_LEN], int ind)
{
	int i;
	for (i = ind; text[i - 1][0] != '\n'; i++)
		swap2(text[i], text[i + 1]);
	swap2(text[i], text[i + 1]);
}

#pragma endregion