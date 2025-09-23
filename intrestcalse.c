#include <stdio.h>  
#include <math.h>
void main(){
    double principal ,rate ;
    int time;
    double total; // changed to double
    printf("Compound Interest Calculator\n");
    printf("Enter principal amount : ");
    scanf("%lf",&principal);

    printf("Enter rate of interest : ");
    scanf("%lf",&rate);
    rate=rate/100;

    printf("Enter time in years : ");
    scanf("%d",&time);  
 
    total=principal*pow((1+rate),time);
    printf("Total amount after %d years : %lf\n",time,total);
    printf("Compound interest after %d years : %lf\n",time,total-principal);

}