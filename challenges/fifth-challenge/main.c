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

    if (str_size <= 0) {
        printf("It's not possible to reverse the string!\n");
        exit(132);    
    }

    // Reverse the string (last character position is length - 1)
    check = reverse_str(my_string, 0, str_size - 1);

    // If the function return value is true, the reverse procedure occurred normally
    if (check)
        printf("\nReversed string: %s\n", my_string);
    else
        printf("It occurred an error reversing the string!\n");

    return 0;
}
