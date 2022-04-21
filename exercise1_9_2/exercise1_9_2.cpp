/*Alter the last program of exercise 1 in such a way that the output doesn’t go to the screen but 
is written to a file. The file to write to must be specified by the user.*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {
    FILE* fp;
    char stream[150] = {};//what the user wants to type can be up to 149 chars
    char fileName[70] = {}; //file name
    char a[100] = {};
    int c; //counter variable
    int i = 0;//var for for loop
    int k = 0; //var to keep track of as of last time user hits enter
    errno_t error_code; //variable to check if fopen_s worked right

    printf("Enter a file name ending with .txt\n");
    *a = scanf_s("%s", &fileName, (unsigned)_countof(fileName));//hate this scanf_s function :) Needed this third param that was kicking my butt.
    //"C:\\Users\\niklo\\OneDrive\\Desktop\\testFile.txt";
    error_code = fopen_s(&fp, fileName, "w"); //open file as specified by the user

    if (error_code) { //if error_code comes back as something other than 0 kill the program
        printf("Error! Failed to open file in w mode!");
        return 1;
    }
    printf("Start typing stuff. Exit with Ctrl + A:\nType here:"); //Asking user to start typing anything
    while ((c = getchar()) != 1) { //Keep looping until the user hits Ctrl + A
        stream[i++] = (char)c; //keeping track of what the user is typing char by char

        if (c == 10) { //if the user hits enter the fun begins
            for (int j = k; j < i; j++) { //we loop through with a for and print from last enter strike up to the current char
                fputc(stream[j], fp); //fling chars into the file char by char
            }
            k = i; //set k equal to value of i the last time the user hit enter
            fclose(fp); // close file
            if (i == 1) { //had a \n always in there on start of loop so I just hacked it to ignore it so we don't print the message at first.
            }
            else {
                printf("line of text successfully written to the file yes baby!\n");//success writing to file message
            }
        }
    }
    stream[i] = '\0'; // String must be closed with \0
    printf("CTRL + A is a correct ending."); //print message upon exit. Life is good.
    return 0; //victory is ours if we get here.
}