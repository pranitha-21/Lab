#include<stdio.h>
int main()
{
    int a=12,b=15,c=10;
    printf("the values a=%d,b=%d,c=%d",a,b,c);
    if(a>=b)
    {
       if(a>=c)
       printf("%d is maximum",a);
       else
       printf("%d is maximum",c);
    }
    else
    {
       if(b>=c)
       printf("%d is maximum",b);
       else
       printf("%d is maximum",c);
    }
}
