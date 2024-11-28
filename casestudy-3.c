#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long N;
        scanf("%lld", &N);

        int count = 0;
        long long temp = N;

        while (temp > 0) {
            int digit = temp % 10;
            if (digit != 0 && N % digit == 0) {
                count++;
            }
            temp /= 10;
        }

        printf("%d\n", count);
    }

    return 0;
}



