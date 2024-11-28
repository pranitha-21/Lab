#include<stdio.h>
void main()
{
   int fahrenheit,centigrade;
   printf("enter the value of temperature in fahrenheit:");
   scanf("%d",&fahrenheit);
   centigrade=(fahrenheit-32)*5/9;
   printf("temperature in centigrade=%d",centigrade);
}
