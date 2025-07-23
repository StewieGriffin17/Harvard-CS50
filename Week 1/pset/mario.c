#include <stdio.h>

int get_positive_number(void);

int main(void){
    int height = get_positive_number();
    int gap;

    for (int i = 1; i <= height; i++){
        gap = height - i;

        for (int k = 0; k < gap; k++){
            printf(" ");
        }

        for (int j = 1; j <= i ; j++){
            printf("#");
        }
        printf("\n");
    }
}

int get_positive_number(void){
    int number;
    do
    {
        printf("Height: ");
        scanf("%i", &number);
    } while (number < 1 || number > 8);
    
    return number;
}