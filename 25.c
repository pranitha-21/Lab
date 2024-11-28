#include <stdio.h>
int main(){
    int n,i;
    printf("Enter an Integer:");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
    int x=n*i;
    printf("%d*%d=%d\n",n,i,x);
    }
    return 0;
}