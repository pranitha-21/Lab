#include<stdio.h>
int main()
{
	int a,b,c,max,greatest;
	printf("enter a,b,c values");
	scanf("%d%d%d",&a,&b,&c);
	max=a>b?a:b;
	greatest=max>c?max:c;
	printf("the greatest is %d",greatest);
}
