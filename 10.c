#include<stdio.h>
int main()
{
    int M,P,C,E,CM;
    printf("enter the value of M,P,C,E");
    scanf("%d%d%d%d",&M,&P,&C,&E);
    CM=M/2+P/2+C/2+E;
    printf("CM=%d",CM);
}
