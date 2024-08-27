#include <stdio.h>

main()
{
  int a, b, x1, x2, x3, x4, x5,x6;
  scanf("%d%d" ,&a, &b);
  x1 = a + b;
  x2 = a-b;
  x3 = a * b;
  x4 = a / b;
  x5 = a % b;
  x6 = -b;
  printf("\nSum of %d and %d is %d", a, b, x1);
  printf("\nDifference of %d and %d is %d", a, b, x2);
  printf("\nProduct of %d and %d is %d", a, b, x3);
  printf("\nQuotient of %d and %d is %d", a, b, x4);
  printf("\nModulus of %d and %d is %d", a, b, x5);
  printf("\nNegative of %d is %d", b, x6);
  
  return 0;
}