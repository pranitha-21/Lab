#include<stdio.h>
int main()
{
   int h,m,s,sec;
   printf("enter the value of h,m,s");
   scanf("%d%d%d",&h,&m,&s);
   sec=h*3600+m*60+s;
   printf("sec=%d",sec);
}
