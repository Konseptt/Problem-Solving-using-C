#include <stdio.h>

int main() 
{
  int a;
  printf("Enter Age");
  scanf("%d", &a);
  if (a > 18)
    printf("Eligible for voting");
  else
    printf("Not Eligible for Voting");
  
}