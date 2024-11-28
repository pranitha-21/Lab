#include <stdio.h>
int main(){
    int sales;
    float commission;
    printf("Enter sales amount:");
    scanf("%d",&sales);
    if(sales<=500)
    {
        commission=0.05*sales;
    }
    else if(sales>500&&sales<=2000)
    {
        commission=35+(sales-500)*0.1;
    }
    else if(sales>2000&&sales<=5000)
    {
        commission=185+((sales-2000)*0.12);
    }
    else
    {
        commission=0.125*sales;
    }
    printf("The commission amount:Rs.%f",commission);

    return 0;
}