#include <stdio.h>

struct Student {
  int roll_no;
  char name[50];
  int marks;
};

int main() {
  FILE *fp;
  struct Student s;

  fp = fopen("LNMIITSTUDENT.DAT", "a");

  if (fp == NULL) {
    printf("Error opening file.\n");
    return 1;
  }

  printf("Enter details for new student:\n");
  printf("Roll number: ");
  scanf("%d", &s.roll_no);
  printf("Name: ");
  scanf("%s", s.name);
  printf("Marks: ");
  scanf("%d", &s.marks);

  fprintf(fp, "%d %s %d\n", s.roll_no, s.name, s.marks);

  fclose(fp);

  printf("Student details added to file.\n");

  return 0;
}

