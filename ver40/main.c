/**********************************************************
 * Morse Code VERSION 4
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
  /* user iput */
  char message[20];
  printf("Enter telegram message: ");
  scanf("%[^\n]s", message);
  printf("What you've entered: %s, %d\n", message, strlen(message));
  mytoupper(message);
  printf("What you've entered: %s\n", message);

  /* print translated code */
  char *ptr = message;
  printf("Morse code: ");
  int len = strlen(message);
  for (int i = 0; i < len; i++) {
    if (*(ptr + i) == ' ') {
      printf("   ");
    } else {
      for (int j = 0; j < sizeof(ascii) / sizeof(char); j++) {
        if (*(ptr + i) == ascii[j]) {
          printf("%s ", code[j]);
        }
      }
    }
  }

  return 0;
}
