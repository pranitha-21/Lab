#include<stdio.h>
int main()
{
	int i,j,n=1;
	for(i=5;i>=0;i--)
	{
		for(j=0;j<5;j++)
		{
			if(j>i||i==j)
			{
				printf("%d",n);
				n=n+1;
			}
			else
			{
				printf(" ");
			}
		}
			printf("\n");
			n=1;
	}
}
