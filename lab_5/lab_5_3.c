// Write a program to display first 20 terms of Fibonacci series 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ........20th
// term
#include <stdio.h>
int main() {

  int i;

  // initialize first and second terms
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;

  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  // print 3rd to 20th terms
  for (i = 3; i <= 20; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
