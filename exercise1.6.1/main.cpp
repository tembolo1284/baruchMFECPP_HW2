/*Write a C - program that contains two print macro calls.The first prints the variable a, the
second prints the variables aand b.Printing happens by the use of the PRINT1and
PRINT2 macros that accept arguments.These macros must be defined in an include - file.
The variables a and b gets their value in the function main().
Name the program macro.c and the include - file Defs.h. Don't forget to implement
the mechanism to avoid multiple inclusion of the header file.*/
#include <stdio.h>
#include <iostream>
#include <string>
#include "Defs.h"

//must include Defs.h header file for this code to work.
//will call macros PRINT1 and PRINT2 to print a and a,b, respectively.
int main() {

	int a = 2;
	int b = 5;
	printf("First Print macro call outputs the single variable: ");
	PRINT1(a);
	printf("\nand the next macro outputs two variables:");
	PRINT2(a, b);
    printf("\n");


}
