// Yaniv Avrahami 302374921

/*
This program gets four integers (m, n, a and b) and char (ch = - + * /) 
as inputs. m, n and a, b represent each a fraction. the program prints 
the result of the arithmetic operation between the two fractions.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct fraction {
	int numerator;
	int denominator;
};

int main() {

	int m, n, a, b;
	char ch;
	printf("Please enter four integers that represents two fractions and an arithmetic symbol (-+*/): ");
	scanf("%d%d%d%d %c", &m, &n, &a, &b, &ch);
	
	struct fraction frac1, frac2, frac_res;

	frac1.numerator = m;
	frac1.denominator = n;
	
	frac2.numerator = a;
	frac2.denominator = b;

	if (ch == '+') {
		if (frac1.denominator == frac2.denominator) {
			frac_res.numerator = frac1.numerator + frac2.numerator;
			frac_res.denominator = frac1.denominator;
		} else {
			frac_res.denominator = frac1.denominator * frac2.denominator;
			frac_res.numerator = frac1.numerator * frac2.denominator + frac1.denominator * frac2.numerator;
		}
	}

	if (ch == '-') {
		if (frac1.denominator == frac2.denominator) {
			frac_res.numerator = frac1.numerator - frac2.numerator;
			frac_res.denominator = frac1.denominator;
		} else {
			frac_res.denominator = frac1.denominator * frac2.denominator;
			frac_res.numerator = frac1.numerator * frac2.denominator - frac1.denominator * frac2.numerator;
		}
	}

	if (ch == '*') {
		frac_res.numerator = frac1.numerator * frac2.numerator;
		frac_res.denominator = frac1.denominator * frac2.denominator;
	}

	if (ch == '/') {
		frac_res.numerator = frac1.numerator * frac2.denominator;
		frac_res.denominator = frac1.denominator * frac2.numerator;
	}

	printf("%d %d %f", frac_res.numerator, frac_res.denominator, frac_res.numerator / (float)frac_res.denominator);
}