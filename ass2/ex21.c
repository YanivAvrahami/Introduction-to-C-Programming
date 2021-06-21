// Yaniv Avrahami 302374921
 
/* 
This program gets three floats (a, b and y) 
as inputs and prints if there was a single, 
none or infinite solutions for the equation y=ax+b.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("Please enter three numbers, a, b and y: ");
	float a, b, y;
	scanf("%f%f%f", &a, &b, &y);

	if (a != 0) {
		printf("The solution is %.4f", (y - b) / a);
	} else if (a == 0 && (y - b) != 0) {
		printf("There is no solution");
	} else {
		printf("There is an infinite amount of solutions");
	}
}