#include <stdio.h>
int main(){
    int n,reverse=0,remainder;
    printf("Enter number:");
    scanf("%d",&n);

    while(n!=0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    printf("%d is of number",reverse);
    return 0;
}