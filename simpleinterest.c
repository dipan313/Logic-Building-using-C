#include<stdio.h>
int main(){
    float p,r,t,si;
    printf("put percentage: ");
    scanf("%f",&p);    
    printf("put rate: ");
    scanf("%f",&r);    
    printf("put time: ");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("simple interest of your fridge is %f",si);
    return 0;
}