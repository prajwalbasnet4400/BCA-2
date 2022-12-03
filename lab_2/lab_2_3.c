// Prajwal Basnet
// WAP to print the current system date

#include <time.h>
#include <stdio.h>
#include <curses.h>

int main(){
    printf("Program to print the current system date");
    printf("\n");
    printf("********************************");
    printf("\n");
    time_t tm;
    time(&tm);
    printf("Current date/time: %s",ctime(&tm));
    printf("\n");
    return 0;
};