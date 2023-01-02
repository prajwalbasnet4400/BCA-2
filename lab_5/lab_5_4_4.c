#include <stdio.h>
int main()
{

  for (int i = 5; i > 0; i--)
  {
    int prev=0;
    for (int j=1;j<i;j++){
      prev = prev + j;
      printf("%d ",prev);
    }
      printf("%d \n",i);
  };

  return 0;
}
