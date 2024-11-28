#include<stdio.h>
int main(){
	char a;
	printf("enter character");
	scanf("%c", &a);
	printf("the ASCII value of character is %d",a);
	if(a>=48&&a<=57){
		printf("character is digit");
	}
	else if(a>=65&&a<=90){
		printf("character is capital case letter");}

	else if(a>=97&&a<=122){
		printf("character is small case letter");

	}

	else{printf("character is symbol");

	return 0;
}
}
