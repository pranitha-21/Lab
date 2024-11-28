#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  int length_with_spaces, length_without_spaces;
  char *ptr;

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  length_with_spaces = strlen(str) - 1;

  ptr = str;
  length_without_spaces = 0;
  while (*ptr != '\0') {
    if (*ptr != ' ') {
      length_without_spaces++;
    }
    ptr++;
  }

  printf("Length of the string (including spaces): %d\n", length_with_spaces);
  printf("Length of the string (excluding spaces): %d\n", length_without_spaces);

  return 0;
}

