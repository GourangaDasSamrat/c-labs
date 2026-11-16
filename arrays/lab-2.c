#include <stdio.h>

int main(void) {
    const char *coffeeTypes[5] = {
        "Cold Brew",
        "Cappuccino",
        "Mocha",
        "Iced Coffees",
        "Lattes"
    };

    printf("Coffee one: %s\n", coffeeTypes[0]);
    printf("Coffee two: %s\n", coffeeTypes[1]);

    return 0;
}
