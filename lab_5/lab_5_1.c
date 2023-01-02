// Write a program to input two integer numbers and display the sum of even numbers between these two input numbers.

#include <stdio.h>

int main(){
    int n1,n2,sum=0;

    printf("enter space delimited two numbers:");
    scanf("%d %d",&n1,&n2);

    for (int i = n1; i < n2; i++){
        if (i%2==0){
            sum = sum + i;
        };
    };
    printf("Sum is : %d",sum);
    return 0;
}