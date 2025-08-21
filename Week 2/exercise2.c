// check if a lowercase string's characters are in alphabetical order or not.

#include <stdio.h>
#include <string.h>

int main(void){
    char user_input[100];
    printf("Enter a lowercase string: ");
    scanf("%s", user_input);
    
    for (int i = 1; i < strlen(user_input); i++){
        if (user_input[i] < user_input[i - 1]){
            printf("No\n");
            return 0;
        }
    } 
    printf("Yes\n");
    return 0;
}