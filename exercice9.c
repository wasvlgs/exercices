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
    printf("\n Your Data Table is: \n"); 
    for (int i = 0; i < elements; i++){
        printf("Age %i is: %i \n", i + 1, ages[i]);
    }
    
    printf("Start reverse your table:  \n ");

            int table[elements];
        for (int i = 0; i < elements; i++)
        {
            int d = elements - 1;
            table[i] = ages[d - i];
            
        }
        for (int i = 0; i < elements; i++)
        {
            ages[i] = table[i];
        }
        
        
        printf("\n Your New Data Table is: \n"); 
    for (int i = 0; i < elements; i++){
        printf("Age %i is: %i \n", i + 1, ages[i]);
    }
        
        
    }