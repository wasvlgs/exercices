#include <stdio.h>

int main(){
    int element1;
    printf("Enter le nombre d'éléments de tableau 1: ");
    scanf("%i", &element1);
    int ages1[element1];
    
    for (int i = 0; i < element1; i++){
        printf("Enter age of number %i: ",i + 1);
        scanf("%i", &ages1[i]);
    }
    int element2;
    printf("Enter le nombre d'éléments de tableau 2: ");
    scanf("%i", &element2);
    int ages2[element2];

    
    for (int i = 0; i < element2; i++){
        printf("Enter age of number %i: ",i + 1);
        scanf("%i", &ages2[i]);
    }


    printf("\n Your Data of table 1 is: \n"); 
    for (int i = 0; i < element1; i++){
        printf("Age %i is: %i \n", i + 1, ages1[i]);
    }
    printf("\n Your Data of table 2 is: \n"); 
    for (int i = 0; i < element2; i++){
        printf("Age %i is: %i \n", i + 1, ages2[i]);
    }
}