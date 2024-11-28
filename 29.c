#include <stdio.h>
int main(){
    int n,num,reverse=0,remainder;
    printf("Enter number:");
    scanf("%d",&n);
    num=n;

    while(n!=0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    if(reverse==num)
    {
         printf("%d is a palindrome",num);
    }
    else{
        printf("%d is not a palindrome",num);
    }
    return 0;
}