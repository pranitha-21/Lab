#include<stdio.h>
int main()
{
   int a,b,c,d,e,sum;
   printf("enter the marks in 5 subjects a,b,c,d,e");
   scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
   sum=a+b+c+d+e;
   printf("sum=%d",sum);
   int division;
   division=sum/100;
   printf("division=%d",division);
   switch(division)
   {
      case 5:printf("a division");
      break;
      case 4:printf("b division");
      break;
      case 3:printf("c division");
      break;
      case 2:printf("d division");
      break;
      default:printf("invalid marks");
  }
}
