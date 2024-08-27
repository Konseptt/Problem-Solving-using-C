#include <stdio.h>
int main()
{
  int a;
  printf("Enter an integer\n");
  scanf("%d",&a);
  a%2 == 0 ? printf("Even number\n") : printf("Odd number\n");
  return 0;
}