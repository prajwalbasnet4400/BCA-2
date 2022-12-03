// Prajwal Basnet
// WAP to find distance between two points

#include <stdio.h>
#include <math.h>

int main(){
    printf("Program to distance between two points");
    printf("\n");
    double  x1, y1, x2, y2, distance;
    printf("Enter x1,y1: ");
    scanf("%lf,%lf",&x1,&y1);
    printf("Enter x2,y2: ");
    scanf("%lf,%lf",&x2,&y2);
    distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("The distance is: %lf",distance);
    return 0;
};