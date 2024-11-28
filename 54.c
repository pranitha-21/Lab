#include<stdio.h>
int main()
{
	int a[10],i,sum;
	printf("\nenter the numbers into array:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the array is:");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	sum=0;
	for(i=0;i<10;i++)
	{
		sum=sum+a[i];
	}
	printf("\nthe sum of the numbers is %d",sum);
}
