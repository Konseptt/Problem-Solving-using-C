#include <stdio.h>

int product(int n){
if(n >= 1)
  return n * product(n-1);
else
  return 1;
}
int main()
{int n;
 printf("Enter a number: ");
 scanf("%d", &n);
 printf("The factorial of %d = %d", n, product(n));}