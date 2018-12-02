#include <string.h>
#include <stdio.h>
#include "trim.h"

int main(int argc, char const *argv[]) {

  char test_string[512];
  strcpy(test_string,*argv);

  printf("\n");

  for(int i=0;i<argc;i++)
  {
    printf("%s", argv[i]);
  }

  printf("\n");
  printf("\n");

  trim(test_string,test_string);
  printf("%s\n",test_string);

  return 0;
}
