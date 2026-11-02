#include <stdio.h>

int main() {
    // Declare an integer variable
    int score;
    
    // Assign value to score
    score = 390;

    // Declare a char array to store a string
    // C uses char arrays for strings, not a 'string' type
    char name[] = "Gouranga Das Samrat";

    // Constant char array - cannot be modified
    const char myName[] = "Gouranga Das Samrat";

    // Print the name to stdout
    printf("Gouranga Das Samrat\n");
    
    return 0;
}
