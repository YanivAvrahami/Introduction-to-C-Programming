//Yaniv Avrahami 302374921
#include <stdio.h>

int main() {
	float radius; 
	float circumference;
	float area;
	float pi = 3.141;

	printf("Enter a radius: ");
	scanf_s("%f", &radius);

	circumference = 2 * pi * radius;
	area = pi * radius * radius;

	printf("The circumference is: %f\n", circumference);
	printf("The area is: %f", area);
}