#include <stdio.h>

void concatenate_strings(char *dest, char *src1, char *src2) {
    while (*src1 != '\0') {
        *dest = *src1;
        dest++;
        src1++;
    }

    while (*src2 != '\0') {
        *dest = *src2;
        dest++;
        src2++;
    }

    *dest = '\0';
}

int main() {
    char str1[100], str2[100], dest[200];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    concatenate_strings(dest, str1, str2);

    printf("Concatenated string: %s\n", dest);

    return 0;
}

