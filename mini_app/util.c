#include "calc.h"

char get_operation_ip() {
  char operation;
  printf("Enter the required operation from the below:\n");
  printf("'+'\n'-'\n'*'\n'/'\n  ---> ");
  scanf("%c", &operation);
  return operation;
}

void get_inputs(int *a, int *b) {
  printf("Enter a: b:");
  scanf("%d %d", a, b);
}
