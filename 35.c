#include <stdio.h>

int main() {
    int N, sum, single_digit;

    printf("Enter a number: ");
    scanf("%d", &N);
    
    sum = 0;
    while (N > 0) {
        sum += N % 10;
        N /= 10;
    }

    while (sum >= 10) {
        single_digit = 0;
        while (sum > 0) {
            single_digit += sum % 10;
            sum /= 10;
        }
        sum = single_digit;
    }

    printf("Sum of the digit of number(single digit): %d\n", sum);

    return 0;
}
