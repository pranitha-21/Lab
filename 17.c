#include<stdio.h>
int main()
{
   int a,b,c;
   printf("enter the vlues of a,b,c");
   scanf("%d%d%d",&a,&b,&c);
   if(a>b&&a>c)
   printf("the maximum is a=%d",a);
   if(b>a&&b>c)
   printf("the maximum is b=%d",b);
   if(c>a&&c>b)
   printf("the maximum is c=%d",c);
}
