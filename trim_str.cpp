#include <string.h>
#include <stdio.h>
#include "trim.h"

int main(int argc, char const *argv[]) {

  printf("\n");
  for(int i=0;i<argc;i++)
  {
    printf("%s", argv[i]);
  }
  printf("\n");
  printf("\n");

  char full_console_argument[512];
  strcpy(full_console_argument,*argv);

  char second_console_argument[512];
  strcpy(second_console_argument,argv[1]);

  trim(second_console_argument,second_console_argument);
  printf("%s %s\n",argv[0],second_console_argument);

  return 0;
}
