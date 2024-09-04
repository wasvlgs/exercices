#include <stdio.h>

int main(){
    int elements;
    printf("Enter le nombre d'éléments de tableau: ");
    scanf("%i", &elements);
    int numbers[elements];
    int somme = 0;

    for (int i = 0; i < elements; i++){
        printf("Enter number %i: ",i + 1);
        scanf("%i", &numbers[i]);
        somme += numbers[i];
    }
    printf("\n The totale of the table is: %i",somme); 
    
}