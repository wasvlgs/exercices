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
    printf("\n Your Data is: \n"); 
    for (int i = 0; i < elements; i++){
        printf("Age %i is: %i \n", i + 1, ages[i]);
    }

    char answer;
    printf("\n You want to change a value from the table y/n ?");

    scanf(" %c", &answer );

    if (answer == 'y')
    {
        int change;
        printf("Enter the number that you want to change it: ");
        scanf("%i", &change);

        int newValue;
        printf("Enter the new value : ");
        scanf("%i", &newValue);
    
        for (int i = 0; i < elements; i++)
        {
            if(ages[i] == change){
                ages[i] = newValue;
                printf("\n Your Data is: \n"); 
                for (int d = 0; d < elements; d++){
                    printf("Age %i is: %i \n", d + 1, ages[d]);
                }
            }
        }
        
    }
    return 0;
}