/*Try to create a function Swap(). This function must exchange the value of two variables. 
For example: if i=123 and j=456, then i=456 and j=123 after the Swap() function has 
been called. The variables i and j are declared, initialised and printed in the 
function main(). This problem can be solved by using pointers as arguments for 
the Swap()function.*/
#include <stdio.h>
#include <iostream>
#include <string>

int Swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
return 0;
}

int main() {
	int i = 123;
	int j = 456;

	printf("i = %i, and j = %i", i, j);
	Swap(&i, &j); //Swap is called to flip variable values
	printf("\ni = %i, and j = %i. The swap has worked!\n", i, j);
	return 0;
}

