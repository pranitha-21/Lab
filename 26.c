#include <stdio.h>
int main(){
    int N,i,n;
    printf("Enter N:");
    scanf("%d",&N);
    int sum=0,sumeven=0;

    for(i=1;i<=N;i=i+2)
    {
        sum=sum+i;
       }
    printf("sum of all odd no between 1 and %d = %d\n",N,sum);
    for(n=2;n<=N;n=n+2)
    {
        sumeven=sumeven+n;
       }
    printf("sum of all even no between 1 and %d = %d\n",N,sumeven);
    return 0;
}