#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int element;
    int table[1000];

    int test_tri = 1;
    int tmp;
    printf("Enter number of elements: ");
    scanf("%i", &element);

    for (int i = 0; i < element; i++)
    {
        printf("\n Enter value %i: ", i + 1);
        scanf("%i", &table[i]);
    }
printf("\navant\n");

    for (int i = 0; i < element; i++)
    {
        printf("  %d  ",table[i]);
        
    }
    while (test_tri == 1)
    {
        test_tri=0;

        for (int i = 0; i < element; i++)
        {
            if(table[i]  > table[i+1]  ){
                tmp = table[i];
                table[i] = table[i + 1];
                table[i + 1] = tmp;
                test_tri = 1;
            }

        }

    }
printf("apres\n");

    for (int i = 0; i < element; i++)
    {
        printf("  %d  ",table[i]);
        
    }
    

    return 0;
}