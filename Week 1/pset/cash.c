#include <stdio.h>

int get_positive_number(void);

int main(void){
    int amount = get_positive_number();
    int number_of_changes = 0;

    // quarters calculation
    number_of_changes += amount / 25;
    amount %= 25;

    // dimes calculation
    number_of_changes += amount / 10;
    amount %= 10;

    // pennies calculation
    number_of_changes += amount / 5;
    amount %= 5;

    // cents calculation
    number_of_changes += amount / 1;
    amount %= 1;

    printf("%i", number_of_changes);
}

int get_positive_number(void){
    int number;
    do
    {
        printf("Change owed: ");
        scanf("%i", &number);
    } while (number <= 0);
    
    return number;
}