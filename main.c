#include "mock/embedded.h"

#include <stdio.h>

int main()
{
  GPIOA = 27;
  printf("Hello World\r\n");
  return 0;
}

