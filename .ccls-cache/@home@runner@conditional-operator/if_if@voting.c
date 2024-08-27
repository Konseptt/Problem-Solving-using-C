#include <stdio.h>

int main() 
{
  int a;
  printf("Enter age");
  scanf("%d", &a);
  if (a>=18){
    printf("Eligible for Voting");
  }
  if (a<=18){
    printf("Not Eligible for Voting");
  }
  
}