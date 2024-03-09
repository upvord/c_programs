#include "calc.h"

int process_operation(char op) {
  switch (op) {
  case '+':
    return sum();
    break;

  case '-':
    return sub();
    break;

  case '*':
    return mul();
    break;

  case '/':
    return div();
    break;

  default:
    printf("Wrong input %c\n", op);
    return -1;
  }
}
