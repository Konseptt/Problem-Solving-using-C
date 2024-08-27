#include <stdio.h>

int main() {
  int c1, c2, c3;
  c1=(10<15)&&(12>8);
  c2=(10!=15)||(8==7);
  c3=!(10>15);
  printf("c1= %d, c2= %d, c3= %d, c1, c2, c3");
  return 0;
}