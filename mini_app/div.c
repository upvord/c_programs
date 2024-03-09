#include "calc.h"

int div() {
  int a, b;
  get_inputs(&a, &b);
  if (b == 0) {
    return 0;
  }
  return a / b;
}
