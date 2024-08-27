#include <stdio.h>

int main() 
{
  int a;
  printf("Enter Year");
  scanf("%d", &a);
  if (a % 4 == 0){
    printf("Entered year is a leap year");
  }
  if (a % 4 !=0){
    printf("Entered year is a leap year");
  }
}