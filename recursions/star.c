#include <stdio.h>

int product(int n1, int n2)
{
  if(n2 == 0)
    return 0;
  if(n2 > 0)
    return(n1 + product(n1, n2-1));
  if(n2 < 0)
    return -product(n1, -n2);
}

int main()
{
  int x,y;
  printf("Enter Two Intergers: ");
  scanf("%d%d", &x, &y);
  printf("product = %d", product(x,y));
}