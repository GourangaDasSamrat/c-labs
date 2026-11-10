#include <stdio.h>

int main() {
  // initialize variables
  int num1;
  int num2;

  // ask user for num1 and num2
  printf("Enter your number 1: ");
  scanf("%d", &num1);

  printf("Enter your number 2: ");
  scanf("%d", &num2);

  // arithmetic operations
  int addition = num1 + num2;
  int substraction = num1 - num2;
  int multiplication = num1 * num2;
  int division = num1 / num2;
  int modulus = num1 % num2;

  // prints (answers)
  printf("Addition of num1 and num2 is: %d\n", addition);
  printf("Substraction of num1 and num2 is: %d\n", substraction);
  printf("Multiplication of num1 and num2 is: %d\n", multiplication);
  printf("Division of num1 and num2 is: %d\n", division);
  printf("Modulus of num1 and num2 is: %d\n", modulus);

  return 0;
}
