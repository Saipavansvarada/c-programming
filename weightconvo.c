#include <stdio.h>
void main(){
    int option = 0;
    float kg = 0.0f, g=0.0f ;
    printf("Weight Converter\n");

    printf("1. Kg to Grams\n");
    printf("2. Gram to Kilograms\n");
    printf("Choose an option (1 or 2): ");
    scanf("%d",&option);    
    getchar(); // clear input buffer
  
 if (option==1)
    {
        printf("Enter weight in Kilograms:");
        scanf("%f",&kg);
        g=kg*1000;  
        printf("Weight in Grams: %.2f g\n",g);

    }
    else if (option==2)
    {
        printf("Enter weight in Grams:");
        scanf("%f",&g);
        kg=g/1000;  
        printf("Weight in Kilograms: %.2f kg\n",kg);

    }
    else
    {
        printf("Invalid option selected.\n");
    }
    


}