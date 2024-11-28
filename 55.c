#include<stdio.h>
int main()
{
	int a[10],ocount=0,ecount=0,i;
	printf("\nenter the numbers into array:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		ecount=ecount+1;
		else
		ocount=ocount+1;
	}
	printf("\nthe total odd count is %d",ocount);
	printf("\nthe total even count is %d",ecount);
}
