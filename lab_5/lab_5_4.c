// Write a program to display flag of Nepal.

#include <stdio.h>
int main() {

  // 1st triangle
  for (int i=1;i<6;i++){
    for (int j=1;j<=i;j++){
      printf("%s","*");
    };
    printf("\n");
  };

  // 2nd triangle
  for (int i=1;i<6;i++){
    for (int j=1;j<=i;j++){
      printf("%s","*");
    };
    printf("\n");
  };
  // stick
  for (int i=1;i<5;i++){
    printf("*\n");
  }

  return 0;
}
