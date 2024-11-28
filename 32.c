#include <stdio.h>
int main(){
    int n,i,num,max=0,second_max=0;
    printf("Enter the nos:");
    scanf("%d",&n);
    printf("Enter a no:");
    scanf("%d",&num);
    max=num;
    for(i=1;i<n;i++)
    {
        printf("Enter a no:");
        scanf("%d",&num);
        if(num>max)
        {
            second_max=max;
            max=num;
        }
        else if(num>second_max)
        {
            second_max=num;
        }
    }
    printf("max:%d \n",max);
    printf("second max:%d \n",second_max);
    
    return 0;
}