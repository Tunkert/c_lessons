/*
 * Author: Timothy Unkert
 * Website: https://unkertmedia.com
 * Purpose: Intro to data types
 * Date: 11/22/22
 */

#include <stdio.h>

int main() {
    // declare and initialize an integer
    int myAge = 46;
    // declare and initialize a float - a number with a decimal
    float pi = 3.14;
    // declare and initialize a character
    char myGrade = 'A';

    // print the variables using different format specifiers
    printf("I am %d years old.\n", myAge);
    printf("The value of PI is %f.\n", pi);
    printf("My grade in C is %c.\n", myGrade);
    return 0;
}