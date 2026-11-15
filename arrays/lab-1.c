#include <stdio.h>

int main() {
    const char *coffeeTypes[5] = {
        "Cold Brew",
        "Cappuccino",
        "Mocha",
        "Iced Coffees",
        "Lattes"
    };

    printf("Coffee types:\n");

    for (int i = 0; i < 5; i++) {
        printf("%s\n", coffeeTypes[i]);
    }

    return 0;
}
