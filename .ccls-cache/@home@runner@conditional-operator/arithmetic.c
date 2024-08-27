#include <stdio.h>

main() {
  int a, b, x1, x2, x3, x4, x5, x6;
  scanf("%d%d", &a, &b);
  x1 = a + b;
  x2 = a - b;
  x3 = a * b;
  x4 = a / b;
  x5 = a % b;
  x6 = -b;
  printf("\n%d + %d = %d", a, b, x1);
  printf("\n%d - %d = %d", a, b, x2);
  printf("\n%d * %d = %d", a, b, x3);
  printf("\n%d / %d = %d", a, b, x4);
  printf("\n%d %% %d = %d", a, b, x5);
  printf("\n-%d  = %d", b, x6);

  return 0;
}