#include <stdio.h>
#include <string.h>

int main() {
    const char *pizzaTypes[4] = {
        "Calzone",
        "Neapolitan",
        "Chicago Deep-Dish",
        "Sicilian"
    };

    for (int i = 0; i < 4; i++) {
        if (strcmp(pizzaTypes[i], "Neapolitan") == 0) {
            printf("Skipping %s\n", pizzaTypes[i]);
            continue;
        }
        printf("Making %s...\n", pizzaTypes[i]);
    }

    return 0;
}
