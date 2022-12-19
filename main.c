#include <stdio.h>

int main(void) {
  int x,n;
  printf("Enter the number to be reversed:");
  scanf("%d",&x);
  while(x!=0)
    {
      n=n*10+x%10;
      x=x/10;
    }
  printf("\nReversed number is %d",n);
  return 0;
}