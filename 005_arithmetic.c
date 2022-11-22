/*
 * Author: Timothy Unkert
 * Website: https://unkertmedia.com
 * Purpose: Demonstrate arithmetic operators in C
 * Date: 11/22/22
 */

#include <stdio.h>
#include <math.h>

int main() {
	// declare two variables in the same statement
	int a, b;
	// initialize the two variables
	a = 10;
	b = 3;
	// add the two variables and print them
	printf("Adding: %d\n", a + b);
	// subtract the two variables and print them
	printf("Subtracting: %d\n", a - b);
	// multiply the two variables and print them
	printf("Multiplying: %d\n", a * b);
	// divide the two variables and print them, what do you notice?
	printf("Dividing: %d\n", a / b);
	// find the remainder of division of the two variables, this is referred to as the modulo operator
	printf("The remainder of division: %d\n", a % b);
	// find the power of one number raised to another number
	printf("2 to the power of 3: %f\n", pow(2, 3)); // notice the different format specifier
	return 0;
}