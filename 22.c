#include<stdio.h>
int main()
{
   int num,q=1;
   printf("enter the value of num");
   scanf("%d",&num);
   while(num>0)
   {
      q=q*num;
      num=num-1;
	}
	printf("the facorial of the number=%d",q);
}
