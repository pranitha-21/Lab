#include <stdio.h>

int main() {
  int head_circumference;
  int hat_size;
  int pi=3.14;

  printf("Enter your head circumference in inches: ");
  scanf("%d", &head_circumference);

  hat_size = (head_circumference) / pi;

  printf("Your hat size is %d.\n", hat_size);

  return 0;
}
