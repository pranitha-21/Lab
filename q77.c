#include<stdio.h>
void palindrome(int n);
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	palindrome(n);
	return;
}
void palindrome(int n)
{
	int i,q;
	i=n;
	while(n!=0)
	{
		n=n%10;
		q=q*10+n;
		n=n/10;
	}
    if(q==i)
    printf("the number is palindrom");
    else
    printf("the number is not palindrom");
    
}
