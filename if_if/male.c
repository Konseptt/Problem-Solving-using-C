#include <stdio.h>

int main()
{
  char gender;
  printf("Enter you gender (M/F): ");
  scanf("%c", &gender);
  if(gender == "M") {
    printf("Male");
  }
  if(gender == "F"){
    printf("Female");
  }
}