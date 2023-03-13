// 7-2 WAP to display largest and smallest element of an
// array defined in Q.No. 7-1
#include <stdio.h>

int main() {
    float list[10];
    float largest;
    // store 0 to 9 in array
    for(int i=0;i<10;i++){
        scanf(" %f",&list[i]);
    };
    // set largest as initial num in array, so we can
    // start comparing it to others
    largest = list[0];
    // loop & compare through the array &
    // set the largest number
    for(int i=0;i<10;i++){
        if (largest < list[i]){
          largest = list[i];  
        };
    };
    // print largest num which was stored
    printf("%f\n", largest);
    return 0;
}