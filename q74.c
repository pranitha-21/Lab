#include<stdio.h>
int main()
{
	int a[5],b[5],c[10],i,j,pos,swap,min,temp;
	printf("enter a array elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("value of array elements\n");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	
	for(i=0;i<4;i++)
	{
		pos=i;
		for(j=i+1;j<5;j++)
		{
			if(a[pos]>a[j])
			pos=j;
		}
		     if(pos!=i)
			 {
		        swap=a[i];
		        a[i]=a[pos];
		        a[pos]=swap;
			 }
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("enter the b array elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("values of b aray elements");
	for(i=0;i<5;i++)
	{
		printf("%d",b[i]);
	}
	
	for(i=0;i<4;i++)
	{
		pos=i;
		for(j=i+1;j<5;j++)
		{
			if(b[pos]>b[j])
			pos=j;
		}
		     if(pos!=i)
			 {
		        swap=b[i];
		        b[i]=b[pos];
		        b[pos]=swap;
			 }
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",b[i]);
	}
	
	printf("the c array is\n");
	for(i=0;i<5;i++)
	{
		c[i]=a[i];
	}
		for(i=0;i<5;i++)
		{
			c[i+5]=b[i];
		}
	
	printf("the merged array");
	for(i=0;i<10;i++)
	{
		printf("%d",c[i]);
	}
	printf("array after sorting");
    for(i=0;i<10;i++)
	{
		pos=i;
		for(j=i+1;j<10;j++)
		{
			if(c[pos]>c[j])
			pos=j;
		}
		     if(pos!=i)
			 {
		        swap=c[i];
		        c[i]=c[pos];
		        c[pos]=swap;
			 }
	}
	for(i=0;i<10;i++)
	{
		printf("%d\t",c[i]);
	}
	
}
