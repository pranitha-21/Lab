#include <stdio.h>

int main() {
    int terms, a = 0, b = 1, c;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &terms);

    printf("Fibonacci Series: ");

    if (terms >= 1) {
        printf("%d,", a);
    }
    
    if (terms >= 2) {
        printf("%d,", b);
    }

    for (int i = 3; i <= terms; i++) {
        c = a + b;
        printf("%d,", c);
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}
