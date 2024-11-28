#include <stdio.h>

int main() {
    int start=1, end;

    printf("Enter no of digits: ");
    scanf("%d", &end);

    printf("Squares of numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        int square = i * i;
        printf("%d,",square); 
    }

    return 0;
}
