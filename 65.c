#include<stdio.h>
int main()
{
    int a[3][3],i,j;
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
    printf("the transpose of the matrix is");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}
