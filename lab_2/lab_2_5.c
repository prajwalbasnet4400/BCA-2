// Prajwal Basnet
// WAP to find area of triangle

#include <stdio.h>
#include <math.h>

int main(){
    printf("Program to find area of triangle");
    printf("\n");
    double  a, b, c, area, s;
    printf("Enter a: ");
    scanf("%lf",&a);
    printf("Enter b: ");
    scanf("%lf",&b);
    printf("Enter c: ");
    scanf("%lf",&c);
    s = (a + b + c ) / 2;
    area = sqrt((s * (s-a) * (s-b) * (s-c)));
    printf("Area is : %lf",area);
    return 0;
};