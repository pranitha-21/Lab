#include<stdio.h>
#include<string.h>
void stringlen(char txt[100]);
int main()
{
	char txt[100];
	printf("enter the text msg");
	gets(txt);
	puts(txt);
	stringlen(txt);
	
}
void stringlen(char txt[100])
{
	int count;
	count=strlen(txt);
	printf("count=%d",count);
}
