// Write a program to conver binary to decimal
#include <stdio.h>
#include <math.h>

int main()
{
  int n, done=0,res;
  int length=1;

  printf("Enter an binary number: ");
  scanf("%d", &n);
  int n_cpy = n;

  // first find length of number
  while (n_cpy/10 != 0)
  {
    n_cpy = n_cpy/10;
    length++;
  };
  // Then convet to decimal
  for (int i= 0;i < length;i++){
    int remainder = n%10;
    res = res + (remainder * pow(2,i));
    n = n/10;
  }
  printf("Decimal is: %d",res);
  return 0;
};