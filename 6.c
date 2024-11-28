#include<stdio.h>
int main()
{
   int x=4,y=2;
   x=x+y;
   y=x-y;
   x=x-y;
   printf("x=%d,y=%d",x,y);
}
