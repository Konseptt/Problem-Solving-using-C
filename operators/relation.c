#include <stdio.h>

int main() {
  int a, b, c, d, e, f, g, h;
  scanf("%d %d", &a, &b);
  c=a>b;
  a=a>=b;
  e=a<b;
  f=a<=b;
  g=a>>b;
  h=a!=b;
  printf("\n%d > %d is %d", a, b, c);
  printf("\n%d >= %d is %d", a, b, a);
  printf("\n%d < %d is %d", a, b, e);
  printf("\n%d <= %d is %d", a, b, f);
  printf("\n%d and %d is %d", a, b, g);
  printf("\n%d != %d", b, h);    

  return 0;
}