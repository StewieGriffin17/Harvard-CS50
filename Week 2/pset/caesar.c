// https://cs50.harvard.edu/x/psets/2/caesar/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc, char *argv[]){
    if (argc != 2){
        printf("Usage: %s key", argv[0]);
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Key must be a non-negative integer.\n");
            return 1;
        }
    }

    int key = atoi(argv[1]);

    char plaintext[1000];
    printf("Plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);

    printf("Ciphertext: ");
    for (int i =0, len = strlen(plaintext); i < len; i++){
        char c = plaintext[i];

        if (isupper(c)){
            printf("%c", ((c - 'A' + key) % 26) + 'A');
        }
        else if (islower(c)){
            printf("%c", ((c - 'a' + key) % 26) + 'a');
        }
        else {
            printf("%c", c);
        }
    }

    printf("\n");
    return 0;
}
