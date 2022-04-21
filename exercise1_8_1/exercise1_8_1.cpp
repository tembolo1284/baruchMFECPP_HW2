/*Write a C - program that prints the contents of a struct called Article.An Article has the
following characteristics :
• Article number
• Quantity
• Description(20 characters)
The test program must create an Article of which the contents are assigned at
initialization level. Printing the Article is done with a Print() function.This function gets the address of the
structure as a parameter. Tip: Suppose that p is the pointer to the structure.It will allow the fields to be printed
by(*p).fieldname or p->fieldname*/
#include <stdio.h>
#include <iostream>

struct Article {
	int num;  //Article number
	int quantity; // Quantity
	char des[20]; // Description of up to 20 characters
};

int Print(Article data) {
	printf("Article number is %i: ", data.num);
	printf("\nQuantity is %i: ", data.quantity);
	printf("\nDescription is %s.", data.des);

	return 0;
}

int main() {
	Article myArticle = { 100, 20, "Northeast Location" }; //instantiating and initializing an instance of my Article struct

	Print(myArticle);
	return 0;
}