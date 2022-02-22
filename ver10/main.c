/**********************************************************
 * Morse Code VERSION 1
 *********************************************************/

// https://www.geeksforgeeks.org/morse-code-implementation/

#include <stdio.h>
#include <string.h>

void morseEncode(char x) {
  // refer to the Morse table
  // image attached in the article
  switch (x) {
    case ' ':
      printf("    ");
      break;
    case 'a':
      printf(".- ");
      break;
    case 'b':
      printf("-... ");
      break;
    case 'c':
      printf("-.-. ");
      break;
    case 'd':
      printf("-.. ");
      break;
    case 'e':
      printf(". ");
      break;
    case 'f':
      printf("..-. ");
      break;
    case 'g':
      printf("--. ");
      break;
    case 'h':
      printf(".... ");
      break;
    case 'i':
      printf(".. ");
      break;
    case 'j':
      printf(".--- ");
      break;
    case 'k':
      printf("-.- ");
      break;
    case 'l':
      printf(".-.. ");
      break;
    case 'm':
      printf("-- ");
      break;
    case 'n':
      printf("-. ");
      break;
    case 'o':
      printf("--- ");
      break;
    case 'p':
      printf(".--. ");
      break;
    case 'q':
      printf("--.- ");
      break;
    case 'r':
      printf(".-. ");
      break;
    case 's':
      printf("... ");
      break;
    case 't':
      printf("- ");
      break;
    case 'u':
      printf("..- ");
      break;
    case 'v':
      printf("...- ");
      break;
    case 'w':
      printf(".-- ");
      break;
    case 'x':
      printf("-..- ");
      break;
    case 'y':
      printf("-.-- ");
      break;
    // for space
    case 'z':
      printf("--.. ");
      break;
  }
}

void morseCode(char* str) {
  while (*str) {
    morseEncode(*str);
    str++;
  }
}

// Driver's code
int main() {
  char* str = "abcd efg";
  morseCode(str);

  return 0;
}
