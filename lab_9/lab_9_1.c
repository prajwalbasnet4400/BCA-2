// lab 9-1
// WAP to create a user defined function to calculate & display sum & average of two
// integers numbers entered by user
#include<stdio.h>

int main(){
    int a , b;
    printf("Enter 1st number");
    scanf("%d",&a);
    printf("Enter 2nd number");
    scanf("%d",&b);
    calc(a,b);
}

int calc(int a,int b){
    int sum, avg;
    sum = a + b;
    avg = sum / 2;
    printf("The Sum is %d\n",sum);
    printf("The Avg is %d", avg);
}
