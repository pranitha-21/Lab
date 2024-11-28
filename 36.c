#include <stdio.h>

int main() {
    int start = 1;
    int n;
    printf("Enter N:");
    scanf("%d",&n);
    
    for (int i = start; i <= n; i++) {
        if (i % 2 != 0) { 
            printf("%d,", i);
        }
    }
    
    return 0;
}
