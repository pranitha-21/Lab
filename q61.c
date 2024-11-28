#include<stdio.h>
int main()
{
	int i,j,n=10,temp;
	int a[10]={6,5,7,4,8,3,22,78,65,45};
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(j=0;j<10;j++)
	{
		printf("%d \t",a[j]);
	}
}
