#include <stdio.h>
int main(){
    int units;
    float charge;
    printf("Enter the units consumed:");
    scanf("%d",&units);

    if(units<=200){
        charge=0.50*units;
    }   
    else if(units<=400){
        charge=100+0.65*(units-200);
    }
    else if(units<=600){
        charge=230+0.80*(units-400);
    }
    else{
        charge=425+1.25*(units-600);
    }
    printf("charge:Rs.%f",charge);
    return 0;
}