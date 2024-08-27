#include <stdio.h>

int main()
{
  int a;
  printf("Enter any year: ");
  scanf("%d", &a);
  (a%4==0 && a%100!=0) ? printf("LEAP YEAR") :
  (a%400 ==0 ) ? printf("LEAP YEAR") : printf("COMMON YEAR");
    return 0;
}