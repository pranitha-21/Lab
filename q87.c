#include<stdio.h>
#include<conio.h>
struct student
{
	int rollno;
	char sname[40];
	float marks;
};
int main()
{
	struct student aih[10];
	int i;
	for(i=0;i<10;i++)
	{
		printf("\n enter the student roll no");
		scanf("%d",&aih[i].rollno);
		printf("\n enter the student name");
		scanf("%s",&aih[i].sname);
		printf("\n enter the student marks out of 1000");
		scanf("%f",&aih[i].marks);
	}
	
	for(i=0;i<10;i++)
	{
		if(aih[i].marks>500)
		{
			printf("roll no=%d",aih[i].rollno);
			printf("student name=%s",aih[i].sname);
			printf("marks=%f",aih[i].marks);
		}
	}
}
