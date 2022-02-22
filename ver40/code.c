/**********************************************************
 * Morse Code VERSION 4
 *********************************************************/

#include "code.h"

#include <ctype.h>
#include <string.h>

void mytolower(char *str) {
  while (*str) {
    if (*str >= 'A') {
      *str = 'a' + *str - 'A';
    }
    str++;
  }
}

void mytoupper(char *str) {
  int len = strlen(str);
  for (int i = 0; i < len + 1; i++) {
    *(str + i) = toupper(*(str + i));
  }
}

void mytoupper2(char *str) {
  char *ptr = str;
  while (*ptr != '\0') {
    if (*ptr >= 'a' && *ptr <= 'z') *ptr = *ptr - ('a' - 'A');
    ptr++;
  }
}

char ascii[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

/* array of translated code */
char *code[10] = {"dah-dah-dah-dah-dah", "di-dah-dah-dah-dah",
                  "di-di-dah-dah-dah",   "di-di-di-dah-dah",
                  "di-di-di-di-dah",     "di-di-di-di-dit",
                  "dah-di-di-di-dit",    "dah-dah-di-di-dit",
                  "dah-dah-dah-di-dit",  "dah-dah-dah-dah-dit"};