#include<stdio.h>
int main()
{
	int n;
	printf("No. of voters:");
	scanf("%d",&n);
	int a[100],i,n1=0,n2=0,n3=0,n4=0,n5=0,w=0;
	printf("enter your vote as number");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	switch(a[i])
	{
		case 1:n1=n1+1;
		break;
		case 2:n2=n2+1;
		break;
		case 3:n3=n3+1;
		break;
		case 4:n4=n4+1;
		break;
		case 5:n5=n5+1;
		break;
		default:w=w+1;		
	}
	}
	printf("\nno of votes casted for the first contestant are %d",n1);
	printf("\nno of votes casted for the second contestant are %d",n2);
	printf("\nno of votes casted for the third contestant are %d",n3);
	printf("\nno of votes casted for the fourth contestant are %d",n4);
	printf("\nno of votes casted for the fifth contestant are %d",n5);
	printf("\nwrong casted votes are %d",w);
}
