#include <stdio.h>
int main(){
	int n,i=1,r;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("factors:");
	while(i<=n)
	{
		r=n%i;
		if(r==0){
			printf("%d,",i);
		}
		i=i+1;
	}
}
