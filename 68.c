#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],result[3][3],i,j,k;
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
    printf("enter the values into matrix B");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("the matrix B is");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           result[i][j]=0;
            for(k=0;k<3;k++)
            {
            result[i][j]=result[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("the product of matrices is");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
}
