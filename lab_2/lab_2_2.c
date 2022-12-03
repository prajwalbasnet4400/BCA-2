// Prajwal Basnet
// WAP to calculate speed of a car
// take distance travelled  and time as input

#include <stdio.h>

int main(){
    int distance, time;
    float speed;
    printf("Program to calculate the speed of car");
    printf("\n");
    printf("Enter distance travelled(meter):");
    scanf("%d",&distance);
    printf("Enter time taken(seconds):");
    scanf("%d",&time);
    speed = distance / time;
    printf("Speed of car is (m/s): %f",speed);
    printf("\n");
    return 0;
};