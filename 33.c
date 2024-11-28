#include <stdio.h>
int main(){
    int n,i,num,max,min;
    printf("Enter the nos:");
    scanf("%d",&n);
    printf("Enter a no:");
    scanf("%d",&num);
    max=num;
    min=num;
    for(i=1;i<n;i++)
    {
        printf("Enter a no:");
        scanf("%d",&num);
        if(num>max)
        {
            max=num;
        }
        if(num<min)
        {
            min=num;
        }
        
    }
    printf("max:%d \n",max);
    printf("min:%d \n",min);

return 0;
}