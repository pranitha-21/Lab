#include <stdio.h>

int main() {
  FILE *fp;
  char ch;
  int char_count = 0, word_count = 0, line_count = 0;

  fp = fopen("text.txt", "r");

  if (fp == NULL) {
    printf("Error opening file.\n");
    return 1;
  }

  while ((ch = fgetc(fp)) != EOF) {
    char_count++;
    if (ch == ' ') {
      word_count++;
    }
    if (ch == '\n') {
      line_count++;
      word_count++;
    }
  }

  if (ch != ' ' && ch != '\n') {
    word_count++;
  }

fclose(fp);

  printf("Number of characters: %d\n", char_count);
  printf("Number of words: %d\n", word_count);
  printf("Number of lines: %d\n", line_count);

  return 0;
}

