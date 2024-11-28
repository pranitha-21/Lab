#include <stdio.h>

int main() {
    int start=1, end;

    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Even numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf("%d,", i);
        }
    }

    return 0;
}
