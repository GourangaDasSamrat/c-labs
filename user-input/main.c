#include <stdio.h>
#include <string.h>

int main() {
    char userName[100];
    int userID;

    printf("What is your legal fullname?\n");
    fgets(userName, sizeof(userName), stdin);

    // Remove the trailing newline character added by fgets
    userName[strcspn(userName, "\n")] = '\0';

    printf("What is your %s account's user id?\n", userName);
    scanf("%d", &userID);

    printf("Your username is %s and your userid is %d\n", userName, userID);

    return 0;
}
