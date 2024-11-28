#include <stdio.h>
#include <math.h>

int flip(int num, int n) {
    int reversed_last_n_digits = 0;
    int original_last_n_digits = num % (int)pow(10, n);
    int original_remaining_digits = num / (int)pow(10, n);

    while (original_last_n_digits > 0) {
        int digit = original_last_n_digits % 10;
        reversed_last_n_digits = reversed_last_n_digits * 10 + digit;
        original_last_n_digits /= 10;
    }

    return original_remaining_digits * (int)pow(10, n) + reversed_last_n_digits;
}

int main() {
    int num, n;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the number of digits to flip: ");
    scanf("%d", &n);

    int flipped_num = flip(num, n);

    printf("Flipped number: %d\n", flipped_num);

    return 0;
}



