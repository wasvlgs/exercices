#include <stdio.h>

int main(){
    int elements;
    printf("Enter le nombre d'éléments de tableau: ");
    scanf("%i", &elements);
    int numbers[elements];
    for (int i = 0; i < elements; i++){
        printf("Enter number %i: ",i + 1);
        scanf("%i", &numbers[i]);
    }
    int minimal = numbers[0];
    for (int i = 1; i < elements; i++)
    {
        if(minimal > numbers[i]){
            minimal = numbers[i];
        }
    }
    
    printf("\n La valeur maximal de tableau est: %i",minimal); 
    
}