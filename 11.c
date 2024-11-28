#include<stdio.h>
int main()
{
    int sec,h,m,s;
    printf("enter the value of sec");
    scanf("%d",sec);
    h=sec/3600;
    m=(sec-(3600*h))/60;
    s=(sec-(3600*h)-(60*m));
    printf("h:m:s-%d%d%d",h,m,s);
}
