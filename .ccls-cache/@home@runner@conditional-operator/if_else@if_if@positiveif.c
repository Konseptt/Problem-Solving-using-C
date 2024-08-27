#include <stdio.h>

int main() 
{
  int num;
  printf("Enter a Number: ");
  scanf("%d", &num);
  if(num>=0)
  {printf("%d is positive", num);
  }
   if(num<0)
   {printf("%d is negative", num);
  }
}