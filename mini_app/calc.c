#include "calc.h"

int main(int argc, char *argv[]) {

  char operations = get_operation_ip();

  int result = process_operation(operations);

  printf("Result is %d\n", result);

  return 0;
}
