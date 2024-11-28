 #include<stdio.h>
 int factorial(int n);
 int main()
 {
 	int n,r;
 	printf("enter the values of n and r");
 	scanf("%d%d",&n,&r);
 	int result=factorial(n)/(factorial(r)*factorial(n-r));
 	printf("%d\n",result);
 	int result1=factorial_recursion(n)/(factorial_recursion(r)*factorial_recursion(n-r));
 	printf("%d",result1);
 }
 int factorial(int n)
 {
 	int factorial=1,i;
 	for(i=1;i<=n;i++)
 	
 		factorial=factorial*i;
	 
	 return factorial;
 }
 int factorial_recursion(int n)
 {
 	if(n==0)
 	    return 1;
 	else
 	   return n*factorial_recursion(n-1);
 }
