#include <stdio.h>

int main(){
    int elements;
    printf("Enter le nombre d'éléments de tableau: ");
    scanf("%i", &elements);
    int data[elements];

    for (int i = 0; i < elements; i++){
        printf("Enter number %i: ",i + 1);
        scanf("%i", &data[i]);
    }
    int facteur;
    printf("\n Enter le nombre de multiplication: "); 
    scanf("%i", &facteur);
    printf("\n Your Data Update is: \n"); 
    for (int i = 0; i < elements; i++){
        printf("Age %i is: %i \n", i + 1, data[i] * facteur);
    }
}