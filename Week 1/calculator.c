// Not using cs50.h library

#include <stdio.h>

int main(void){
    int x, y;
    printf("Enter x: ");
    scanf("%i", &x);
    printf("Enter y: ");
    scanf("%i", &y);

    int sum = x + y;

    printf("%i\n", sum);
}