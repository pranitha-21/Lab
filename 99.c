#include <stdio.h>

int main() {
  char filename[100];
  FILE *fp;
  char ch;
  int vowel_count = 0;
  
  fp = fopen("filename.txt", "r");

  if (fp == NULL) {
    printf("Error opening file.\n");
    return 1;
  }

  while ((ch = fgetc(fp)) != EOF) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
      vowel_count++;
    }
  }



  printf("Number of vowels in the file: %d\n", vowel_count);
  fclose(fp);

  return 0;
}

