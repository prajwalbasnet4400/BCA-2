// 7-3 WAP to initialize one dimensional integer array of size 8 and display the 
// sum and average of array elements
#include <stdio.h>

int main() {
    int list[8];
    int avg=0;
    int sum=0;
    // store 0 to 9 in array
    for(int i=0;i<8;i++){
        scanf(" %d",&list[i]);
    };
    // find sum
    for(int i=0;i<8;i++){
        sum = sum + list[i];
    };
    // to find average
    // since there are 8 elements, we divide the sum by 8
    avg = sum/8;
    
    printf("sum: %d \n", sum);
    printf("average: %d \n", avg);
    return 0;
}