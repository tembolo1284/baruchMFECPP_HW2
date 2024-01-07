/*Create a C-program that has a function DayName()which can print the day of a given 
day-number. For example:
1 gives: Day 1 is a Sunday
7 gives: Day 7 is a Saturday.
The day-name (1-7) should be written "hard-coded” into the program using an array of 
strings*/
#include <string>
#include <iostream>

int DayName(int a) {
	const char *dayArray[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday","Friday", "Saturday"};
	//const char day = dayArray[a-1];
	printf("You chose the following day of the week: %s\n", dayArray[a-1]);

return 0;
}

int main() {
	int a = 3; // should give Tuesday as a result.
	DayName(a);
}


