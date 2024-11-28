#include <stdio.h>

struct Student {
  int roll_no;
  char name[50];
  int marks;
};

int main() {
  FILE *fp;
  struct Student s;
  int n, i;

  printf("Enter the number of students: ");
  scanf("%d", &n);

  fp = fopen("LNMIITSTUDENT.JAVA", "w");

  if (fp == NULL) {
    printf("Error opening file.\n");
    return 1;
  }

 for (i = 0; i < n; i++) {
    printf("Enter details for student %d:\n", i + 1);
    printf("Roll number: ");
    scanf("%d", &s.roll_no);
    printf("Name: ");
    scanf("%s", s.name);
    printf("Marks: ");
    scanf("%d", &s.marks);

    fprintf(fp, "%d %s %d\n", s.roll_no, s.name, s.marks);
  }

  fclose(fp);

  printf("Student details written to file.\n");

  return 0;
}

