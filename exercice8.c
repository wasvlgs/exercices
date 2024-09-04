#include <stdio.h>

int main(){
    int elements;
    printf("Enter le nombre d'éléments de tableau: ");
    scanf("%i", &elements);
    int ages[elements];
    int ages2[elements];

    for (int i = 0; i < elements; i++){
        printf("Enter age of number %i: ",i + 1);
        scanf("%i", &ages[i]);
        ages2[i] = ages[i];
    }
    printf("\n Data of table 1: \n"); 
    for (int i = 0; i < elements; i++){
        printf("Age %i is: %i \n", i + 1, ages[i]);
    }
    printf("\n Data of table 2: \n"); 
    for (int i = 0; i < elements; i++){
        printf("Age %i is: %i \n", i + 1, ages2[i]);
    }
}