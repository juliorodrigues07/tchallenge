#include "reverse.h"

int main(int argc, char **argv) {

    // Checks if the running command is valid to proceed (or not)
    if (argc != 2) {
        printf("Usage: ./main <string>\n");
        exit(127);
    }

    // Variables (check to validate if the string was reversed, the string itself and it's length)
    bool check = false;
    char *my_string = argv[1];
    unsigned int str_size = strlen(my_string);

    // Reverse the string (last character position is length - 1)
    reverse(my_string, 0, str_size - 1);

    // Allocates a new string to receive the resulted reversed string
    char *reversed_str = (char *) malloc(str_size * sizeof(char));
    check = strcpy(reversed_str, my_string);

    // If the function return value is true, the reverse procedure occurred normally
    if (check)
        printf("\nReversed string: %s\n", reversed_str);
    else
        printf("It occurred an error reversing the string!\n");

    // Frees the memory space utilized by the string and shuts down the program
    free(reversed_str);
    return 0;
}
