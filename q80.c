#include<stdio.h>
void fibonacci(int n);
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	fibonacci(n);
	return;
}
void fibonacci(int n)
{
	int a,b;
	a=0;
	b=1;
	int pos=0;
	int nt=a+b;
	printf("fibonacci series:%d%d",a,b);
	while(pos<n-2)
	{
	printf("%d",nt);
	a=b;
	b=nt;
	nt=a+b;
	pos++;
}
}
