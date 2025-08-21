#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    if (argc > 1){
        // the given argument is stroed in argv[1], in argv[0] the file of the name is stored.
        printf("hello, %s\n", argv[1]);
    }
    else{
        printf("hello world!");
    }
} 