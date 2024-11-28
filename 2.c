#include<stdio.h>
void main()
{
    int subject1,subject2,subject3,subject4,subject5,sum;
    printf("enter the values of subject1,subject2,subject3,subject4,subject5");
    scanf("%d%d%d%d%d",&subject1,&subject2,&subject3,&subject4,&subject5);
    sum=subject1+subject2+subject3+subject4+subject5;
    printf("marks scored=%d",sum);
    float percentage;
    int totalmarks=500;
    int scored=sum;
    percentage=(scored/totalmarks)*100;
    printf("percentage=%f",percentage);
}
