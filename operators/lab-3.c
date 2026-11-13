#include <stdio.h>
#include <stdbool.h>

int main() {
    // initialize variables
    int num1;
    int num2;

    // ask user for num1 and num2
    printf("Enter your number 1: ");
    scanf("%d", &num1);
    printf("Enter your number 2: ");
    scanf("%d", &num2);

    // relational operations stored in boolean variables
    bool is_equal = (num1 == num2);
    bool is_not_equal = (num1 != num2);
    bool is_greater = (num1 > num2);
    bool is_less = (num1 < num2);
    bool is_greater_equal = (num1 >= num2);
    bool is_less_equal = (num1 <= num2);

    // prints (answers)
    // C does not have boolalpha, so we use a ternary operator to print "true" or "false"
    printf("num1 == num2 is: %s\n", is_equal ? "true" : "false");
    printf("num1 != num2 is: %s\n", is_not_equal ? "true" : "false");
    printf("num1 > num2 is: %s\n", is_greater ? "true" : "false");
    printf("num1 < num2 is: %s\n", is_less ? "true" : "false");
    printf("num1 >= num2 is: %s\n", is_greater_equal ? "true" : "false");
    printf("num1 <= num2 is: %s\n", is_less_equal ? "true" : "false");

    return 0;
}
