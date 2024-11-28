#include<stdio.h>
int main()
{
	int a[10],i,p=0,n=0,zero=0;
	printf("\nenter the numbers into array:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]>0)
		p=p+1;
		else if(a[i]<0)
		n=n+1;
		else if(a[i]==0)
		zero=zero+1;
	}
	printf("\npositive count:%d",p);
	printf("\nnegative count:%d",n);
	printf("\nzero count:%d",zero);
}
