#include <stdio.h>

int totalCoffeeServed(int coffee[], int size) {
  int total = 0;
  for (int i = 0; i < size; i++) {
    total += coffee[i];
  }
  return total;
}

int main(void) {
  int coffeeServed[7] = {20, 54, 13, 10, 21, 39, 92};

  int total = totalCoffeeServed(coffeeServed, 7);

  printf("%d\n", total);
  return 0;
}
