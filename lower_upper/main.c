#include <stdio.h>
#include <ctype.h>

// change the value below to change the special character
#define SPECIAL '"'

typedef enum {
	lowercase,
	uppercase
	} status;

int main() {

	status is_lower = lowercase;
	char input;
	
	printf("Enter a single character and I'll print it back.\n"
	"Enter \" to switch from lowercase to uppercase and vice versa.\n"
	"Enter * to quit the program.\n");
	
	while (1) {
	
		printf("\n\nInput: ");
		input = getchar();		// the input of the user
		getchar();				// escaping '\n' input

	
	// --- check the user input ---

	if (input == SPECIAL) {
		if (is_lower == lowercase) {
			printf("Uppercase: ENABLED.");
			is_lower = uppercase;		// the next character will be in uppercase
			continue;
		} else {
			is_lower = lowercase;		// the next character will be in lowercase
			printf("Uppercase: DISABLED.");
			continue;
		}
	} else {
		if (input == '*') {
			printf("\nGoodbye!\n");		// quit the program
			break;
		}
	}
	
		printf("Output: ");

		if(is_lower == uppercase) {
			putchar(toupper(input));	// print input in uppercase
		} else {
			putchar(tolower(input));	// print input in lowercase
		}
	
	}
	
	return 0;
}
