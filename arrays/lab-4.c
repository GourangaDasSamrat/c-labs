#include <stdio.h>
#include <stdlib.h>

int* prepareCoffeeOrders(int cups) {
  int* orders = (int*)malloc(cups * sizeof(int));
  if (orders == NULL) {
    return NULL;
  }

  for (int i = 0; i < cups; i++) {
    orders[i] = (i + 1) * 10;
  }

  return orders;
}

int main(void) {
  int cups = 0;

  printf("Enter how many cups of coffee you want: ");
  scanf("%d", &cups);

  int* coffeeOrders = prepareCoffeeOrders(cups);
  if (coffeeOrders == NULL) {
    printf("Memory allocation failed.\n");
    return 1;
  }

  for (int i = 0; i < cups; i++) {
    printf("Cup %d has %d ml coffee\n", i + 1, coffeeOrders[i]);
  }

  // memory cleanup
  free(coffeeOrders);

  return 0;
}
