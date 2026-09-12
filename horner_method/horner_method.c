#include "horner_method.h"
#include <stdio.h>
int horner(int coefficients[], size_t len, int x) {
  int polynomial = 0;
  for (int i = len - 1; i >= 0; i--) {
    polynomial = coefficients[i] + x * polynomial;
  }
  return polynomial;
}
