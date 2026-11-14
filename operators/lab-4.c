#include <stdbool.h>
#include <stdio.h>

int main() {
  int isStudent;
  int books;

  printf("Are you a student? (1 for yes and 0 for no): ");
  scanf("%d", &isStudent);

  printf("How many books do you have? ");
  scanf("%d", &books);

  if (isStudent || books > 20) {
    printf("You are a good student");
  } else {
    printf("You are not a good student");
  }

  return 0;
}
