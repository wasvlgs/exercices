#include <stdio.h>

int main(){
    int ages[5] = {10,38,19,45,26};

    for (int i = 0; i < 5; i++){
        printf("Age %i is: %i \n", i + 1, ages[i]);
    }
    
}