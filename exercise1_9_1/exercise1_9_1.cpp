/*Create a C - program that reads the characters from the keyboard and shows them on
screen(the inputted characters should only be displayed when the user hits 'enter', line
by line). When ^ A is entered, the program must end properly.Then the following message will
appear : “CTRL + A is a correct ending.” Tip : getchar() reads and putchar() writes the type int.The value of ^ A is 1.*/
#include <iostream>
#include <stdio.h>
int main() {
	char string[100]; // initializing array to store everything
	int c; // The input character
	int i = 0; // The counter
	int k = 0; //k will keep running track of where user hits enter
	printf("Start typing stuff. Exit with ^A\n");
	while ((c = getchar()) != 1 ) { // as long as character entered isn't ^A keep looping
		string[i++] = (char)c; // Append entered character to string

		if (c == 10) { //if the user hits enter	
			for (int j = k; j < i; j++) { //we loop through and print from last enter hit up to the current char
				printf("%c", string[j]); 
			}
			k = i; //set k equal to value of i the last time the user hit enter
		}
	}
	string[i] = '\0'; // String must be closed with \0
	printf("CTRL + A is a correct ending."); //print message upon exit. Life is good.
	return 0;
}