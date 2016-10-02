#include <stdio.h>
#include <header.h>
#include <stdbool.h>

void printHi(void) {
  bool myBool = true;
  if (myBool) printf("stdbool is loaded and working\n"); 
  printf("Hello makefiles!\n");
  return;
}
