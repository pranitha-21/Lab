#include<stdio.h>
int main()
{
   int base,exp,i=1,num=1;
   printf("enter the base of the number");
   scanf("%d",&base);
   printf("enter the exponent of the base");
   scanf("%d",&exp);
   while(i<=1)
   {
   num=num*base;
   i=i+1;
   }
   printf("the power of the number is %d",num);
}
