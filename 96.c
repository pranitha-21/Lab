#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char *temp = a;
    a = b;
    b = temp;
}

int main() {
    char str[100][50];
    int n, i, j;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    printf("Enter the strings:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                swap(str[j], str[j + 1]);
            }
        }
    }

    printf("Sorted strings:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}


