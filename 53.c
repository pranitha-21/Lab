#include <stdio.h>
int main(){
   int i,j,k,rows=4;
   for(i=0;i<rows;i++)
   {
   	for(j=0;j<rows-i-1;j++)
   	{
   		printf(" ");
	   }
	for(k=0;k<=2*i;k++)
	{
		printf("*");
	}
	printf("\n");
   }
   
   int a,b,c,row=3;
   for(a=0;a<row;a++)
   {
   	for(b=0;b<a;b++)
   	{
   		printf(" ");
	   }
	for(c=0;c<2*(row-a)-1;c++)
	{
		printf("*");
	}
	printf("\n");
   }

return 0;
}
