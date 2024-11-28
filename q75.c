#include<stdio.h>
int main()
{
	int roll_number,subject1,subject2,subject3,max;
	int r[10],s1[10],s2[10],s3[10],i,tm[10];
	printf("roll number\n");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&r[i]);	
	}
	printf("subject1\n");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&s1[i]);
    
	}
	printf("subject2\n");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&s2[i]);
    
	}
	printf("subject3\n");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&s3[i]);
    
	}
	printf("total marks\n");
	for(i=1;i<=10;i++)
	{
		tm[i]=s1[i]+s2[i]+s3[i];
		printf("%d\t",tm[i]);
	}
	
	max=s1[1];
	for(i=1;i<=10;i++)
	{
		if(s1[i]>s1[1])
		{
			max=s1[i];
		}
		
	}
	printf("highest marks in subject 1 is %d and the roll number of the student is %d",max,i);
	
	max=s2[1];
	for(i=1;i<=10;i++)
	{
		if(s2[i]>s2[1])
		{
			max=s2[i];
		}
		
	}
	printf("highest marks in subject 2 is %d and the roll number of the student is %d",max,i);
	max=s3[1];
	for(i=1;i<=10;i++)
	
	{
		if(s3[i]>s3[1])
		{
			max=s3[i];
		}
		
	}
	printf("highest marks in subject 3 is %d and the roll number of the student is %d",max,i);
	max=tm[1];
	for(i=1;i<=10;i++)
	{
		if(tm[i]>tm[1])
		{
			max=tm[i];
		}
		
	}
	printf("highest total marks is %d and the roll number of the student is %d",max,i);
}
	
