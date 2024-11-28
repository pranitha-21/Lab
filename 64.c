#include<stdio.h>
int main()
{
    int a[3][3],max,min,i,j;
    printf("enter the values into matrix A");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix A is");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        j=0;
        a[i][j]=a[i][j]+a[i][j+1]+a[i][j+2];
        printf("the sum of the row is %d\n",a[i][j]);
    }
}
