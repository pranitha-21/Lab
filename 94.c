#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char *ptr1, *ptr2;

    printf("Enter a string: ");
    scanf("%s", str1);

    ptr1 = str1;
    ptr2 = str2;

    int len = strlen(str1);

    while (len > 0) {
        *(ptr2++) = *(ptr1 + len - 1);
        len--;
    }

    *ptr2 = '\0';

    printf("Reversed string: %s\n", str2);

    return 0;
}

