#include <stdio.h>

int fact(int n){
if(n >= 1)
  return n * fact(n-1);
else
  return 1;
}
int main()
{int n;
 printf("Enter a number: ");
 scanf("%d", &n);
 printf("The factorial of %d = %d", n, fact(n));}