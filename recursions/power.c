#include <stdio.h>

int power(int base, int a){
  if (a != 0)
    return (base * power(base, a - 1));
  else
    return 1;
}

int main(){
  int base, a, result;
  printf("Enter base number: ");
  scanf("%d", &base);
  printf("Enter a: ");
  scanf("%d", &a);
  result = power (base, a);
  printf("%d^%d = %d", base, a, result);
}