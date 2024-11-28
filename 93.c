#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  int i, word_count = 0;
  char *ptr;

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  ptr = str;

  for (i = 0; i < strlen(str); i++) {
    if (str[i] == ' ') {
      word_count++;
    }
  }

  if (str[strlen(str) - 1] != ' ') {
    word_count++;
  }

  printf("Number of words in the string: %d\n", word_count);

  return 0;
}
