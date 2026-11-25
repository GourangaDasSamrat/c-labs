#include <stdio.h>
#include <string.h>

int main() {
  char response[100];

  while (1) {
    printf("Do you need more pizza ? ");
    scanf("%99s", response);

    if (strcmp(response, "no") == 0) {
      break;
    }

    printf("Here is your another of pizza. ");
  }

  printf("No more pizza will be served");

  return 0;
}
