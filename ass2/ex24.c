// Yaniv Avrahami 302374921

/*
This program gets two 2D points (four floats) as inputs
and prints the Euclidean distance between the two points.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct Point {
	float x;
	float y;
};

int main() {
	struct Point p1, p2;
	printf("Please enter four floats that represents two points: ");
	scanf("%f%f%f%f", &p1.x, &p1.y, &p2.x, &p2.y);
	
	float distance;
	distance = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
	printf("%f", distance);
}