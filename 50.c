#include<stdio.h>
int main()
{
	int i,j,ascii=65;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",ascii);
		}
		printf("\n");
		ascii=ascii+1;
	}
}
