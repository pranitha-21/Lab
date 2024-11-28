#include<stdio.h>
int main()
{
   int a,b;
   printf("enter the values of a,b");
   scanf("%d%d",&a,&b);
   char operation;
   printf("enter the function");
   scanf("%c",operation);
   switch(operation)
   {
     case '+':printf("the value is %d",a+b);
     break;
     case '-':printf("the value is %d",a-b);
     break;
     case '*':printf("the value is %d",a*b);
     break;
     case '%':printf("the value is %d",a%b);
     break;
     case '/':printf("the value is %d",a/b);
     break;
  }
}
