#include<stdio.h>
void vowel(char c);
int main()
{
	char c;
	printf("enter the character");
	scanf("%c",&c);
	vowel(c);
	return;
}
void vowel(char c)
{
	switch(c)
	{
		case 'a':printf("it is vowel");
		        break;
		case 'e':printf("it is vowel");
		        break;
		case 'i':printf("it is vowel");
		        break;
		case 'o':printf("it is vowel");
		        break;
		case 'u':printf("it is vowel");
		        break;
		default: printf("it is not a vowel");
	}
}
