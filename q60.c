#include<stdio.h>
int main()
{
	int arr[10]={6,18,7,9,0,1,3,5,67,76};
	int i,j,n=10,pos,swap;
	for(i=0;i<(n-1);i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[pos]>arr[j])
			pos=j;
		}
		     if(pos!=i)
			 {
		        swap=arr[i];
		        arr[i]=arr[pos];
		        arr[pos]=swap;
			 }
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
