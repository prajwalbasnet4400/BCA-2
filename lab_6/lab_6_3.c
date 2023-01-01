// Write a program to illustrate break & continue with suitable example.
#include <stdio.h>

int main()
{
  int n;
  printf("Enter an integer: ");
  scanf("%d", &n);
  printf("Prime numbers from '1' to '%d' are\n ", n);

  for (int i = 2; i < n; i++)
  {
    int is_prime = 1;
    // check if 'i' is divisible by any numbers
    for (int j = 2; j < i; j++)
    {
      // if it is divisible by any number, set the flag var
      if ((i % j) == 0)
      {
        is_prime = 0;
        break;
      }
      else
      {
        continue;
        // here this code isn't run because of the 'continue' statement.
        printf("this code isn't run");
      };
    };
    if (is_prime == 1)
    {
      printf("%d, ", i);
    };
  };
  return 0;
};