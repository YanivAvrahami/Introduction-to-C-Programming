// Yaniv Avrahami 302374921

/*
This program gets two natural numbers 
(width and height of rectangle) as input
and prints a rectangle.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_rectangle(int width, int height);
void print_line(int x);
void print_sides(int x);

int main() {
	int x, y;
	scanf("%d%d", &x, &y);
	print_rectangle(x, y);
}

void print_rectangle(int width, int height) {
	int i;
	for (i = 1; i <= height; i++) {
		if (i == 1) {
			print_line(width);
			printf("\n");
		} else if(i == height) {
		    print_line(width);
		} else {
			print_sides(width);
			printf("\n");
		}
	}
}

void print_line(int x) {
	int i;
	for (i = 1; i <= x; i++) {
		printf("*");
	}
}

void print_sides(int x) {
	int i;
	for (i = 1; i <= x; i++) {
		if (i == 1 || i == x) {
			printf("*");
		} else {
			printf(" ");
		}
	}
}