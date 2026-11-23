#include <stdio.h>
#include <string.h>

int main() {
    char response[10];

    do {
        printf("Do you need more pizza (yes/no) ? ");
        scanf("%9s", response);
    } while (strcmp(response, "no") != 0);

    return 0;
}
