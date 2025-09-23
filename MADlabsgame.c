#include <stdio.h>
#include <string.h>
void main(){
    char noun[20]="";
    char adjective1[20]="";
    char adjective2[20]="";
    char adjective3[20]="";

    printf("Enter a adjective(discription): ");
    fgets(adjective1, sizeof(adjective1), stdin); //fgets is taken to read the input 

    printf("Enter a noun(person, place or thing): ");
    fgets(noun, sizeof(noun), stdin);
   
    printf("Enter another adjective(discription): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    
    printf("Enter one more adjective(discription): ");      
    fgets(adjective3, sizeof(adjective3), stdin);
   

    printf("Today I went to the %s movie.\n It was a %s day.\n I saw a %s man who was very %s.", noun, adjective1, adjective2, adjective3);
}