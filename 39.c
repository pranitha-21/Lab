#include <stdio.h>
int main() {
    int start=1, end;

    printf("Enter N: ");
    scanf("%d", &end);

    printf("series:\n", start, end);
    for (int i = start; i <= end; i++) {
        printf("%d/%d!+",i,i); 
    }

    return 0;
}