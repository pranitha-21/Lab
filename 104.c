#include <stdio.h>

enum Color {
  RED,
  GREEN,
  BLUE,
  YELLOW,
  BLACK
};

int main() {
  enum Color color;

  printf("Enter a color code (0-4): ");
  scanf("%d", &color);

  switch (color) {
    case RED:
      printf("Hexadecimal code: #FF0000\n");
      break;
    case GREEN:
      printf("Hexadecimal code: #00FF00\n");
      break;
    case BLUE:
      printf("Hexadecimal code: #0000FF\n");
      break;
    case YELLOW:
      printf("Hexadecimal code: #FFFF00\n");
      break;
    case BLACK:
      printf("Hexadecimal code: #000000\n");
      break;
    default:
  printf("Invalid color code.\n");
  }

  return 0;
}

