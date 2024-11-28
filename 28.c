#include <stdio.h>
int main(){
    int n,digits=0,num,remainder,sum=0,number;
    printf("Enter a number:");
    scanf("%d",&n);
    num=n;
    
    while(n!=0)
    {
        remainder=n%10;
        sum=sum+remainder*remainder*remainder;
        n=n/10;
    }
    if(sum==num)
    {
        printf("%d ia an Armstrong number",num);
    }
    else{
        printf("%d is not an Armstrong number",num);
    }
    return 0;
}