#include <stdio.h>
#include <string.h>

// change the value below to change the maximum size of the input
#define N 20

// change the value below to change the number of repetitions
# define R 3

int main() {

    char input[N];
    char *input_pointer = input;

    printf("Enter a string: ");
    scanf("%s", input);
    
    for(int i=0; i<strlen(input); i++) {

        // print the same letter 'R' times
        for(int j=0; j<R; j++) {
            printf("%c", *(input_pointer + i));
        }

    }
    return 0;
    
}
