#include<stdio.h>

const int SIZE = 3;

float average(int length, int array[]);

int main(void){
    int scores[SIZE];
    for(int i = 0; i < SIZE ; i++){
        printf("Score: ");
        scanf("%d", &scores[i]);
    }

    printf("Average: %f\n", average(SIZE, scores));
}

float average(int length, int array[]){
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum += array[i];
    }
    
    float ave_score = sum / (float) length;

    return ave_score;
}