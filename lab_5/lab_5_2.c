// Write a program to find GCD (greatest common divisor or HCF) and LCM (least common multiple) of two
// numbers.

#include <stdio.h>
int main()
{
    int n1, n2, i, gcd,lcm;

    printf("Enter space delimited two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    lcm = (n1 * n2) / gcd;
    printf("G.C.D of %d and %d is %d\n", n1, n2, gcd);
    printf("The LCM of two numbers %d and %d is %d.", n1, n2, lcm);

    return 0;
}