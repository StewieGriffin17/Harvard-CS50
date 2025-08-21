// https://cs50.harvard.edu/x/psets/2/readability/

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int compute_letters(int len, char text[]);
int compute_words(int len, char text[]);
int compute_sentences(int len, char text[]);

int main(void){
    char text[1000];

    printf("Text: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';
    int len = strlen(text);

    int letters = compute_letters(len, text);
    int words = compute_words(len, text);
    int sentences = compute_sentences(len, text);

    float L = (float) letters / words * 100;
    float S = (float) sentences / words * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1){
        printf("Before Grade 1");
    }
    else if (index >= 16){
        printf("Grade 16+");
    }
    else{
        printf("Grade %i", index);
    }

    return 0;
}

int compute_letters(int len, char text[]){
    int count = 0;

    for (int i = 0; i < len; i++){
        if (isalpha(text[i])){
            count ++;
        }
    }

    return count;
}

int compute_words(int len, char text[]){
    int count = 0;

    for (int i = 0; i < len; i++){
        if (isspace(text[i])){
            count ++;
        }
    }

    return count + 1;
}

int compute_sentences(int len, char text[]) {
    int count = 0;

    for (int i = 0; i < len; i++) {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
            count++;
        }
    }

    return count;
}
