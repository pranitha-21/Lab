#include<stdio.h>
void prime(int n);
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	prime(n);
	return;
}
void prime(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==2)
	printf("1");
	else
	printf("0");
}
