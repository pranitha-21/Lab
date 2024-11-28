#include <stdio.h>
int main(){
    int n,num,sum=0,remainder;
    printf("Enter number:");
    scanf("%d",&n);
    
    while(n!=0)
    {
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;
    }
    printf("sum=%d",sum);
    return 0;
}