#include <stdio.h>

int main(){
    int elements;
    printf("Enter le nombre d'éléments de tableau: ");
    scanf("%i", &elements);
    int ages[elements];

    for (int i = 0; i < elements; i++){
        printf("Enter age of number %i: ",i + 1);
        scanf("%i", &ages[i]);
    }
    printf("\n Your Impair Data is: \n"); 
    for (int i = 0; i < elements; i++){
        if(ages[i] % 2 != 0){
            printf("Age %i is: %i \n", i + 1, ages[i]);
        }
        
    }
}