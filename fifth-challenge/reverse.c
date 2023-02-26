#include "reverse.h"

// Reverses the string swapping each character pair from the outside in (towards the middle)
bool reverse_str(char *str, unsigned int begin, unsigned int end) {

     /* If the positions analyzed are at the middle or beyond, stops the reversing procedure.
        At the middle, the swap has no effect, and beyond that,
        it would start re-reversing the string to its original content. */
    if (begin >= end)
        return true;

    // Swaps the 'beginning' and 'ending' characters pair of the string, using an aux variable
    char swap = str[begin];
    str[begin] = str[end];
    str[end] = swap;

    // Increment and decrements indexes to analyze the resultant substrings iteratively
    begin++;
    end--;

    // Reverses the string recursively (tail recursion)
    reverse_str(str, begin, end);

    // TODO: Fix possibly not returning any value in some control path
    // Also could just print the string initiating by the end index and decrementing it, instead of swapping in place
}
