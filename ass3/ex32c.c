// Yaniv Avrahami 302374921

/*
This program gets a sequence of non-negative whole numbers were minus one 
ends the input, and prints the arithmetic mean and geometric mean of the numbers.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void print_arithmetic_mean(int total_sum, int total_numbers);
void print_geometric_mean(int total_product, int total_numbers);

int main() {
	int total_numbers = 0;
	int total_natural_numbers = 0;
	int i = 0;
	int sum = 0;
	int product = 0;
	int current_number = 0;

    scanf("%d", &total_numbers);

	while (current_number != -1) {
	    
	    // Assume input only whole non negative numbers
		scanf("%d", &current_number);
		
		// Calculate sum 
		sum = sum + current_number;
		
		// Calculate product
		if (current_number > 0) {
		    total_natural_numbers = total_natural_numbers + 1; 
		    if (product == 0) {
		        product = 1;
		    }
			product = product * current_number;
		}
		
	}
	
	print_arithmetic_mean(sum, total_numbers);
	printf(" ");
	print_geometric_mean(product, total_natural_numbers);
}

void print_arithmetic_mean(int total_sum, int total_numbers) {
    if (total_numbers == 0) {
        printf("Empty set of number, hence no aithmetic average\n");
    } else {
        printf("%.4f", total_sum / (float)total_numbers);
    }
}

void print_geometric_mean(int total_product, int total_numbers) {
    if (total_numbers == 0) {
        printf("No positive numbers, hence no geometric mean");
    } else {
        printf("%.4f", pow(total_product, 1 / (float)total_numbers));    
    }
}