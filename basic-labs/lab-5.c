#include <stdio.h>

int main() {
    float teaPrice = 12.999f;
    int roundedTeaPrice = (int)teaPrice;

    int teaQuantity = 23;
    // int totalPrice = teaQuantity * teaPrice;  // This would truncate to int
    double totalPrice = teaQuantity * teaPrice;

    printf("%f\n", totalPrice);
    return 0;
}
