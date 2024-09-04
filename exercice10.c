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
    int search;
    printf("\n Enter Your Search Number: "); 
    scanf("%i", &search);
    for (int i = 0; i < elements; i++){
        if (search == numbers[i])
        {
            printf("Your Search Number Exist.");
            return 1;
        }
    }
    printf("Your Search Number Doesn't Exist.");

    
}