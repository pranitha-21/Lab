#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, vowel_count = 0;
    char *ptr;

    printf("Enter a string: ");
    scanf("%s", str);

    ptr = str;

    while (*ptr != '\0') {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
            vowel_count++;
        }
        ptr++;
    }

    printf("Number of vowels in the string: %d\n", vowel_count);

    return 0;
}



