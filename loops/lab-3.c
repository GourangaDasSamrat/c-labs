#include <stdio.h>

int main() {
    int teaCups;

    printf("Enter the number of tea you want: ");
    scanf("%d", &teaCups);

    for (int i = 1; i <= teaCups; i++) {
        printf("Brewing cup %d of tea...\n", i);
    }

    return 0;
}
