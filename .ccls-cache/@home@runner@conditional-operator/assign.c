#include <stdio.h>

int main() {
  int d,w;
  scanf("%d", &d);
  w=d/7;
  d=d%7;
  printf("%d weeks, %d days", w, d);
  return 0;
}