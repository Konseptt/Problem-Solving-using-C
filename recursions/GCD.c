#include <stdio.h>

int hcf(int a, int b){
  if(b != 0)
    return hcf( a, a % b);
  else
    return a;
}

int main(){
  int a, b;
  printf("Enter two positive integers: ");
  scanf("%d%d", &a, &b);
    printf("GCD of %d and %d is %d", a, b, hcf(a, b));
}