#include "fibonacci.h"

int main(int argc, char **argv) {

    if (argc != 2) {
        printf("Usage: ./main <number>\n");
        exit(127);
    }

    // Gets the value in command line
    int n = atoi(argv[1]);

    // PS: C language integer limits hard restricts the range of testable values (INT_MAX: 2147483647)
    if (n < 0) {
        printf("Inform a positive number.\n");
        exit(1);
    }

    // Receives the boolean indicating if the number passed as real parameter belong to Fibonacci sequence
    bool check = fibonacci(n, FIRST, SECOND);

    if (!check)
        printf("\nThe number doesn't belongs to the Fibonacci sequence!\n");
    else
        printf("\nThe number belongs to the Fibonacci sequence!\n");

    return 0;
}