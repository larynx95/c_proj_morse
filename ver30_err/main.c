/**********************************************************
 * Morse Code VERSION 3
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
  printf("What you've entered: %s\n", message);  // TODO: check this line

  /* print translated code */
  char *ptr = message;
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

  // testing
  char *sam = "abCDef aBcD";
  mytoupper2(sam);
  printf("\n%s\n", sam);
  assert(strcmp(sam, "ABCDEF ABCD") == 0);

  // PlaySound(TEXT("dah.wav"), NULL, SND_FILENAME);

  return 0;
}
