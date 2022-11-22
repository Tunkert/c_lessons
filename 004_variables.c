/*
 * Author: Timothy Unkert
 * Website: https://unkertmedia.com
 * Purpose: Demonstrate variables in C
 * Date: 11/22/22
 */

#include <stdio.h>

int main() {
	// declare variable
	int age;
	// initialize variable
	age = 46;
	printf("Hi, my name is Tim and I am %d years old", age);
	// the %d is called a "format specifier" - format specifiers are different for different data types.
	return 0;
}