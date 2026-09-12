#include "horner_method.h"
#include <stdio.h>

void print_result(int coefficients[], size_t len, int x);
int main() {
  int coefficients[] = {1, 5, 4, 8, 10};
  size_t len = sizeof(coefficients) / sizeof(coefficients[0]);
  int x = 7;
  print_result(coefficients, len, x);
  return 0;
}

void print_result(int coefficients[], size_t len, int x) {
  int res = horner(coefficients, len, x);
  printf("x = %d\n", x);
  printf("{");
  for (int i = 0; i < len; i++) {
    if (coefficients[i] == 0) {

    } else if (i == len - 1) {
      printf(" + %d} = ", coefficients[i]);
    } else if (i == len - 2) {
      printf("%dx", coefficients[i]);
    } else {
      printf("%dx^%d + ", coefficients[i], (int)len - i - 1);
    }
  }

  printf("%d\n", res);
}
