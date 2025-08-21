// Create an array of size 5 where each element is two times the previos and the first element is 1.

#include <stdio.h>

int main(void){
    int arr[5];
    arr[0] = 1;

    for (int i = 1; i < 5; i++){
        arr[i] = arr[i-1] * 2;
    }
    
    for (int i = 0; i < 5; i++){
        printf("%i\n", arr[i]);
    }
}
