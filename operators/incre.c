#include <stdio.h>

int main() {
  int a, y, p, q, z;
  scanf("%d", &a);
  y=a++;
  z=--a;
  p=++a;
  q=a--;
  printf("a=%d, y=%d, p=%d, q=%d, z=%d", a, y, p, z);
  return 0;
}