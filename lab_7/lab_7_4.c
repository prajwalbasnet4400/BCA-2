// 7-4 WAP to display the sum of even numbers & odd numbers of an array defined in
// Q.No. 7-3
#include <stdio.h>

int main() {
    int list[8];
    int sum_odd=0;
    int sum_even=0;
    // store 0 to 7 in array
    for(int i=0;i<8;i++){
        printf("%d",i);
        list[i] = i;
    };
    // find sum
    for(int i=0;i<8;i++){
        if ((list[i] % 2) == 0){
            sum_even = sum_even + list[i];
        } else
        {
            sum_odd = sum_odd + list[i];    
        };
    };
    printf("sum odd: %d \n", sum_odd);
    printf("sum even: %d \n", sum_even);
    return 0;
}