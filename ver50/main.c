/**********************************************************
 * Morse Code VERSION 5
 *********************************************************/

#include <assert.h>    // for testing
#include <ctype.h>     // for toupper
#include <stdio.h>     // standard io
#include <string.h>    // for string manipulation
#include <windows.h>   // for PlaySound
#include <windowsx.h>  // for PlaySound

#include "code.h"

/**********************************************************
 * main function
 *********************************************************/

int main(int argc, char *argv[]) {
  char message[20];
  printf("Enter message: ");
  fgets(message, 20, stdin);
  printf("\n");
  mytoupper(message);

  char *ptr = message;
  printf("Message: %s\n", message);
  printf("Morse code: ");
  while (*ptr) {
    if (*ptr == ' ') {
      printf("    ");
    }
    if (*ptr >= '0' && *ptr <= '9') {
      printf("%s ", nums[*ptr - 48]);
    }
    if (*ptr >= 'A' && *ptr <= 'Z') {
      printf("%s ", alpha[*ptr - 65]);
    }
    ptr++;
  }

  return 0;
}
