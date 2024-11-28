
#include <stdio.h>

#define MACRO(a, b) ((a) > (b) ? (a) : (b))

int main() {
  int a, b;

  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  int max = MACRO(a, b);

  printf("The bigger number is: %d\n", max);

  return 0;
}

