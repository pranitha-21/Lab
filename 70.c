#include<stdio.h>
int main()
{
	int a[5],i,s,n=0;
	printf("enter the values");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the search element");
	scanf("%d",&s);
	for(i=0;i<5;i++)
	{
		if(s==a[i])
		n++;
	}
	if(n>0)
	printf("the occurence of the element is %d",n);
	else
	printf("search element does not exist");
}
