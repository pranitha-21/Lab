#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    int freq[N][26];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 26; j++) {
            freq[i][j] = 0;
        }
    }

    for (int i = 0; i < N; i++) {
        char rock[101];
        scanf("%s", rock);

        for (int j = 0; j < strlen(rock); j++) {
            freq[i][rock[j] - 'a']++;
        }
    }

    int gem_count = 0;
    for (int i = 0; i < 26; i++) {
        int is_gem = 1;
        for (int j = 0; j < N; j++) {
            if (freq[j][i] == 0) {
                is_gem = 0;
                break;
           }
        }
        if (is_gem) {
            gem_count++;
        }
    }

    printf("%d\n", gem_count);

    return 0;
}



