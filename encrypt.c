#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void main(int argc, char *argv[]) {
    // Checks for errors
    if (argc != 3) {
        fprintf(stderr, "Usage: encrypt shift str\n");
    }
    else {
        // Gets the statement to encrypt and the length of statement
        char *msg = argv[2];
        int msg_len = strlen(msg);

        // Turns the given integer into an int from a str 
        int x = atoi(argv[1]);
        // If statement to compensate for larger inputs
        if (x >= 26) {
            int multiple = x / 26;
            x = x - (multiple * 26);
        }

        // Move letters n positions to the left
        for (int i = 0; i < msg_len; i++) {
            // Check that msg[i] is a lower case letter
            if (msg[i] >= 97 && msg[i] <= 122 || msg[i] >= 65 && msg[i] <= 90) {
                // Convert to an upper case
                char upper = toupper(msg[i]);
                upper = upper + x;

                // Checks if letters go out of bounds
                if (upper <= 64) {
                    upper = upper + 26;
                }
                if (upper > 90) {
                    upper = upper - 26;
                }

                // Print adjusted letter
                printf("%c", upper);
            }
            // If msg[i] is not a letter just print the character
            else {
                printf("%c", msg[i]);
            }
        }
        printf("\n");
    }
}