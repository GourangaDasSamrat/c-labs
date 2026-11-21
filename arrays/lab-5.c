#include <stdio.h>

int main(void) {
    const char *foodsTypes[3][4] = {
        {
            "Cold Brew",
            "Cappuccino",
            "Mocha",
            "Iced Coffees"
        },
        {
            "Neapolitan",
            "Chicago Deep-Dish",
            "Sicilian",
            "Detroit-Style"
        },
        {
            "Kashmiri",
            "Ginger",
            "Milk",
            "Traditional"
        }
    };

    for (int i = 0; i < 3; i++) {
        printf("Food %d ->\n", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("Food type : %s\n", foodsTypes[i][j]);
        }
    }

    return 0;
}
