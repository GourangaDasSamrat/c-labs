#include <stdio.h>

int main() {
  // Arithmetic assignment operators
  int a = 10;
  a += 5;  // +=

  int b = 10;
  b -= 5;  // -=

  int c = 10;
  c *= 5;  // *=

  int d = 10;
  d /= 5;  // /=

  int e = 10;
  e %= 3;  // %=

  // prints
  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  printf("%d\n", d);
  printf("%d\n", e);

  return 0;
}
