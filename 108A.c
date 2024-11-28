#include <stdio.h>

void copy_string(char *dest, char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() {
    char src[100], dest[100];

    printf("Enter a string: ");
    scanf("%s", src);

    copy_string(dest, src);

    printf("Copied string: %s\n", dest);

    return 0;
}
