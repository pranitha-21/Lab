#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    printf("Value of x before modification: %d\n", x);

    *ptr = 20;

    printf("Value of x after modification: %d\n", x);

    return 0;
}
