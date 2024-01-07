/* Predict what will be printed on the screen */
#include <stdio.h>
#define PRD(a) printf("%d", (a) ) // Print decimal
#define NL printf("\n"); // Print new line
// Create and initialse array
int a[] = { 0, 1, 2, 3, 4 };
int main()
{
	int i;
	int* p;
	for (i = 0; i <= 4; i++) PRD(a[i]); // 1...here we print 0 1 2 3 and 4.
	NL; // get a new line
	for (p = &a[0]; p <= &a[4]; p++) PRD(*p); // 2...here we print 0 1 2 3 4 as well
	NL;
	NL; //print out two new lines here
	for (p = &a[0], i = 0; i <= 4; i++) PRD(p[i]); // 3...here we print out 0 1 2 3 4
	NL; //print out a new line
	for (p = a, i = 0; p + i <= a + 4; p++, i++) PRD(*(p + i)); // 4...here we jump by 2 so we print 0 2 4
	NL;
	NL; //print out two new lines
	for (p = a + 4; p >= a; p--) PRD(*p); // 5....here we go backwards and print 4 3 2 1 0
	NL; //new line
	for (p = a + 4, i = 0; i <= 4; i++) PRD(p[-i]); // 6....here we also go backwards and print 4 3 2 1 0
	NL; // new line
	for (p = a + 4; p >= a; p--) PRD(a[p - a]); // 7...this one also goes backwards and prints 4 3 2 1 0
	NL; // new line
	return 0;
}
