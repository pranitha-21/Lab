#include<stdio.h>
void getarray(int a[10]);
void displayarray(int a[10]);
void max(int a[10]);
int main()
{
	int a[10];
	printf("\n Enter the array elements");
	getarray(a);
	printf("\n print the array elements");
	displayarray(a);
	printf("\nthe max of array elements");
	max(a);
	return;
}
void getarray(int a[10])
{
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
}
void displayarray(int a[10])
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
}
void max(int a[10])
{
	int max,i;
    max=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		
	}
	printf("max=%d\t",max);
	
}
