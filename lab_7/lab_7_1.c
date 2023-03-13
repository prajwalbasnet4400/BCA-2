// 7-1 WAP to enter 10 floating numbers in an array and display it.
#include <stdio.h>

int main() {
    float list[10];
    // store 0 to 9 in array
    for(int i=0;i<10;i++){
        scanf(" %f",&list[i]);
    };
    // loop through the array & print data in it
    for(int i=0;i<10;i++){
        printf("%f\n", list[i]);
    };
    return 0;
}