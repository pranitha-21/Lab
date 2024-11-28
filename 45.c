#include <stdio.h>
#include <stdlib.h>

int main() {
  int lucky_number;
  int guess;
  int tries = 0;

  lucky_number = rand() % 100 + 1;

  printf("Welcome to the guessing game!\n");

  do {
    printf("Enter your guess (1-100): ");
    scanf("%d", &guess);

    tries++;

    if (guess < lucky_number) {
      printf("Your guess is low.\n");
    } else if (guess > lucky_number) {
      printf("Your guess is high.\n");
    } else {
      printf("Congratulations! You guessed the lucky number in %d tries.\n", tries);
      break;
    }
  } while (guess != lucky_number);

  return 0;
}
