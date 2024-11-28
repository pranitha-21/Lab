#include <stdio.h>

int main() {
  int arr1[5];
  int arr2[5];
  int i;

  printf("Enter 5 numbers for arr1:\n");
  for (i = 0; i < 5; i++) {
    scanf("%d", &arr1[i]);
  }

  int *ptr1 = arr1;
  int *ptr2 = arr2;

  for (i = 0; i < 5; i++) {
    *(ptr2 + i) = *(ptr1 + i);
  }

  printf("Elements of arr2:\n");
  for (i = 0; i < 5; i++) {
    printf("%d ", arr2[i]);
  }

  return 0;
}
