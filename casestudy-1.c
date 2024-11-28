#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void reverse(char *str, int start, int end) {
    while (start < end) {
        swap(&str[start], &str[end]);
        start++;
        end--;
    }
}

int next_permutation(char *str) {
    int n = strlen(str);
    int i, j;
for (i = n - 2; i >= 0; i--) {
        if (str[i] < str[i + 1]) {
            break;
        }
    }

    if (i == -1) {
        return 0;
    }

    for (j = n - 1; j > i; j--) {
        if (str[j] > str[i]) {
            break;
        }
    }
swap(&str[i], &str[j]);

    reverse(str, i + 1, n - 1);

    return 1;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char str[101];
        scanf("%s", str);

        if (next_permutation(str)) {
            printf("%s\n", str);
        } else {
            printf("no answer\n");
        }
    }

    return 0;
}
