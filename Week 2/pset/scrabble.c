// https://cs50.harvard.edu/x/psets/2/scrabble/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int compute_score(int len, char word[]);
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void){
    char input1[20], input2[20];

    printf("Player 1: ");
    scanf("%s", input1);

    printf("Player 2: ");
    scanf("%s", input2);

    int input1_len = strlen(input1);
    int input2_len = strlen(input2);

    int score1 = compute_score(input1_len, input1);
    int score2 = compute_score(input2_len, input2);

    if (score1 > score2){
        printf("Player 1 wins!");
    }
    else if (score2 > score1) {
        printf("Player 2 wins!");
    }
    else {
        printf("Tie!");
    } 

    return 0;
}

int compute_score(int len, char word[]){
    int score = 0;

    for (int i = 0; i < len; i++){
        if (isupper(word[i])){
            score += POINTS[word[i] - 'A'];
        }
        else if (islower(word[i])){
            score += POINTS[word[i] - 'a'];
        }
    }

    return score;
}
