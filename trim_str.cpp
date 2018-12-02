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

  char test_string_trimmed[512];
  trim(test_string,test_string_trimmed);
  printf("%s\n",test_string_trimmed);

  return 0;
}
