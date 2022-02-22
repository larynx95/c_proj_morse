/**********************************************************
 * Morse Code VERSION 7
 *********************************************************/

#include <assert.h>  // for testing
#include <ctype.h>   // for toupper
#include <stdio.h>   // standard io
#include <stdlib.h>  // for malloc
#include <string.h>  // for string manipulation

#include "code.h"

/**********************************************************
 * main function
 *********************************************************/

int main(int argc, char *argv[]) {
  printf("Enter message: ");
  char str[20];
  fgets(str, 20, stdin);
  char_up(str);
  printf("What you've entered: %s\n", str);

  Msg *start = NULL;

  char *ptr = str;
  while (*ptr != '\0') {
    if (*ptr == ' ') {
      start = addnode(start, " ");
    }
    if (*ptr >= '0' && *ptr <= '9') {
      start = addnode(start, nums[*ptr - 48]);
    }
    if (*ptr >= 'A' && *ptr <= 'Z') {
      start = addnode(start, alpha[*ptr - 65]);
    }
    ptr++;
  }

  print_nodes(start);
  printf("\n");

  del_nodes(start);

  return 0;
}
