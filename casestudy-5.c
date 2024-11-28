#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long N;
        scanf("%lld", &N);

        long long a = 0, b = 1, c = 1;

        while (c <= N) {
            if (c == N) {
                printf("IsFibo\n");
                break;
            }
            a = b;
            b = c;
            c = a + b;
        }

        if (c > N) {
            printf("IsNotFibo\n");
        }
    }

    return 0;
}
