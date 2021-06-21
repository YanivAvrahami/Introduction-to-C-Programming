//Yaniv Avrahami 302374921
#include <stdio.h>

int main() {
	float a, b, x, y;
	
	printf("Please enter the value of a: ");
	scanf_s("%f", &a);
	
	printf("Please enter the value of b: ");
	scanf_s("%f", &b);

	printf("Please enter the value of x: ");
	scanf_s("%f", &x);

	y = a * x + b;
	printf("The value of y is: %f\n", y);

	printf("Please enter the value of y: ");
	scanf_s("%f", &y);

	x = (y - b) / a;
	printf("The value of x is: %f", x);
}
