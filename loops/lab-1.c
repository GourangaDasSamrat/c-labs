#include <stdio.h>

int main() {
    int Pizza;

    printf("Enter the number of pizza you wanna serve: ");
    scanf("%d", &Pizza);

    while (Pizza > 0) {
        Pizza--;
        printf("Serving a pizza \n%d remaining\n", Pizza);
    }

    printf("All pizzas are served");
    return 0;
}
