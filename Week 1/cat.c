#include <stdio.h>

void meow(int n);

int main(void){
    int number;
    printf("Number: ");
    scanf("%i", &number);

    meow(number);
}

void meow(int n){
    for (int i = 0; i < n; i++){
        printf("meow\n");
    } 
}
