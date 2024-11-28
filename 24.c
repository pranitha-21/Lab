#include <stdio.h>
#include <math.h>
int main(){
    int n;
    float x,Y;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("Enter value of x:");
    scanf("%f",&x);
    switch(n)
    {
        case 1:Y=1+x;
               break;
        case 2:Y=1+x/n;
               break;
        case 3:Y=1+pow(x,n);
               break;
        default:Y=1+n*x;
               break;
    }
    printf("Y(x,n)=%f",Y);
    return 0;
}