#include<stdio.h>
void swap(int x,int y);
int main()
{
	int x,y;
	printf("enter the  values of x and y");
	scanf("%d%d",&x,&y);
	swap(x,y);
	return;
}
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("after swapping x=%d,y=%d",x,y);
}
