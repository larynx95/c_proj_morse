/**********************************************************
 * Morse Code VERSION 6
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
  printf("%s\n", message);

  char output[100];
  getmorse(message, output);
  printf("Morse code: %s\n", output);

  char *ptr = output;
  while (*ptr) {
    if (*ptr == ' ') {
      Sleep(2000);
    } else if (*ptr == '.') {
      PlaySound(TEXT("../../dit.wav"), NULL, SND_FILENAME);
    } else if (*ptr == '-') {
      PlaySound(TEXT("../../dah.wav"), NULL, SND_FILENAME);
    }
    ptr++;
  }

  return 0;
}
