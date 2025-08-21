// https://cs50.harvard.edu/x/psets/2/substitution/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_valid_key(char *key)
{
    if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 0;
    }

    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Key must only contain alphabetic characters.\n");
            return 0;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        for (int j = i + 1; j < 26; j++)
        {
            if (toupper(key[i]) == toupper(key[j]))
            {
                printf("Key must not contain repeated characters.\n");
                return 0;
            }
        }
    }

    return 1;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s key", argv[0]);
        return 1;
    }

    char *key = argv[1];

    if (!is_valid_key(key))
    {
        return 1;
    }

    char plaintext[1000];
    printf("plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);
    plaintext[strcspn(plaintext, "\n")] = '\0';

    printf("ciphertext: ");
    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        char c = plaintext[i];

        if (isupper(c))
        {
            int index = c - 'A';
            printf("%c", toupper(key[index]));
        }
        else if (islower(c))
        {
            int index = c - 'a';
            printf("%c", tolower(key[index]));
        }
        else
        {
            printf("%c", c);
        }
    }
    printf("\n");

    return 0;
}
