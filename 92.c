#include <stdio.h>

int main() {
  int n, i, largest;
  int *ptr;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int arr[n];

  printf("Enter %d elements:\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  ptr = arr;

  largest = *ptr;

  for (i = 1; i < n; i++) {
    if (*(ptr + i) > largest) {
      largest = *(ptr + i);
    }
  }

  printf("The largest element is: %d\n", largest);

  return 0;
}

