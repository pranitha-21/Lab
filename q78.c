#include<stdio.h>
void armstrong(int n);
int main()
{
	int n;
	printf("enter the mnumber");
	scanf("%d",&n);
	armstrong(n);
	return;
}
void armstrong(int n)
{
	int i,q,sum;
	i=n;
	while(n!=0)
	{
		q=n%10;
		sum=sum+q*q*q;
		n=n/10;
	}
	if(sum==i)
	printf("num is armstrong number");
	else
	printf("num is not an armstrong number");
}
