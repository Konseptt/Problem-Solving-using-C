#include <stdio.h>

int add(int n){
  if (n != 0)
    return n + add(n - 1);
  else
    return n;
}

int main(){
  int a;
  printf("Enter a Positive integer: ");
  scanf("%d", &a);
  printf("Sum = %d", add(a));
  
}