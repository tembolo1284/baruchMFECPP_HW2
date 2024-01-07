/*Create the two macros MAX2(x,y) and MAX3(x,y,z). These macros must return the 
maximum value of the given arguments. Let the macro MAX3 make use of the macro 
MAX2. Add these macros to the file Defs.h*/
#include <stdio.h>
#include <iostream>
#include <string>
#include "Defs.h"
//need Defs.h for this baby to compile

int main() {
	int x = 1;
	int y = 4;
	int z = 7;
	int max2_result = 0;
	int max3_result = 0;

	max2_result = MAX2(x, y);
	max3_result = MAX3(x, y, z);
    printf("The three variable values are: x = %d, y = %d, z = %d\n", x, y , z);
	printf("First Max function call gives us an output of: ");
	printf("%i", max2_result);
	printf("\nand the second Max function call gives us an output of: ");
	printf("%i\n", max3_result);
}
