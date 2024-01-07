/*Alter the last program of exercise 1 in such a way that the output doesn't go to the screen but 
is written to a file. The file to write to must be specified by the user.*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    FILE* fp;
    char stream[150] = {}; // what the user wants to type can be up to 149 chars
    char fileName[70] = {}; // file name
    int c; // counter variable
    int i = 0; // var for for loop
    int k = 0; // var to keep track of as of last time user hits enter

    printf("Enter a file name ending with .txt\n");
    scanf("%s", fileName); // Standard scanf function

    fp = fopen(fileName, "w"); // Open file as specified by the user
    if (!fp) { // Check if file opening succeeded
        printf("Error! Failed to open file in write mode!\n");
        return 1;
    }

    printf("Start typing stuff. Exit with Ctrl + D: \nType here:\n");
    while ((c = getchar()) != EOF) { // Keep looping until the user hits Ctrl + D for EOF
        if (i < (int)sizeof(stream) - 1) { // Prevent buffer overflow
            stream[i++] = (char)c; // keeping track of what the user is typing char by char
        } else {
            printf("Input buffer full.\n");
            break;
        }

        if (c == '\n') { // if the user hits enter the fun begins
            stream[i] = '\0'; // Null-terminate the string
            fputs(stream + k, fp); // Write the string since last enter to the file
            k = i; // set k equal to value of i the last time the user hit enter
            printf("Line of text successfully written to the file.\n"); // success writing to file message
        }
    }

    if (fp) fclose(fp); // Ensure the file is closed properly
    printf("CTRL + D is a correct ending.\n"); // print message upon exit
    return 0; // victory is ours if we get here
}

