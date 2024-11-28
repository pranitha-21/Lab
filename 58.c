#include<stdio.h>
int main()
{
	int a[10],b[10],c[10],i;
	printf("enter the values into array A");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nthe array A is");
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	printf("\nenter the values into array B");
	for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\nthe array B is");
	for(i=0;i<10;i++)
	{
		printf("%d",b[i]);
	}
	for(i=0;i<10;i++)
	{
		c[i]=a[i]+b[i];
		printf("\n%d",c[i]);
	}
}
