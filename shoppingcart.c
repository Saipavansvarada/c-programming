#include <stdio.h>

int main(){
    char item[50]="";
    float price=0.0f;
    int quantity=0;
    float total=0.0f;

    printf("enter item name: ");
    scanf("%[^\n]", item);
    getchar();

    printf("enter price of each item: ");
    scanf("%f", &price);
    getchar(); 

    printf("how many items you want to buy: ");
    scanf("%d", &quantity);

    total=price*quantity;
    printf("your total bill is: %.2f", total);

    return 0;
}