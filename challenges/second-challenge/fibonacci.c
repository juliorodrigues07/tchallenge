#include "fibonacci.h"

bool fibonacci(unsigned int n, unsigned int first_factor, unsigned int second_factor) {

    // Calculates the next sequence number (sum of the two previous numbers)
    unsigned int successor = first_factor + second_factor;

    // If the number is equal to the successor or to one of the first two numbers (base case [0, 1, ...])
    if (n == successor || n == FIRST || n == SECOND)
        return true;

    // If the successor is greater than the number, there's no point to continue calculating the sequence
    else if (n < successor)
        return false;

    // Calculates each element of the sequence recursively (tail recursion)
    else
        fibonacci(n, second_factor, successor);

    // TODO: Fix possibly not returning any value in some control path
}