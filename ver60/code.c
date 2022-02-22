/**********************************************************
 * Morse Code VERSION 6
 *********************************************************/

#include "code.h"

#include <ctype.h>
#include <string.h>

int allupper(char *str) {
  while (*str) {
    if (!isupper(*str)) return 0;
    str++;
  }
  return 1;
}

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

void *getmorse(char *message, char *output) {
  while (*message) {
    if (*message >= '0' && *message <= '9') {
      strcat(output, " ");
      strcat(output, nums[*message - 48]);
    }
    if (*message >= 'A' && *message <= 'Z') {
      strcat(output, " ");
      strcat(output, alpha[*message - 65]);
    }
    message++;
  }
}

/* array of translated code
  index:   0   1   2   3   4   5   6   7   8   9
  ASCII:  48  49  50  51  52  53  54  55  56  57
  So, ASCII = index + 48

  index:  0   1   2   3   4   5   6   7   8   9 ...
  alpha:  A   B   C   D   E   F   G   H   I   J ...
  ASCII: 65  66  67  68  69  70  71  72  73  74 ...
  So, ASCII = index + 65
*/
const char *nums[] = {"-----", ".----", "..---", "...--", "....-",
                      ".....", "-....", "--...", "---..", "----."};

const char *alpha[] = {".-",   "-...", "-.-.", "-..",  ".",    "..-.", "--.",
                       "....", "..",   ".---", "-.-",  ".-..", "--",   "-.",
                       "---",  ".--.", "--.-", ".-.",  "...",  "-",    "..-",
                       "...-", ".--",  "-..-", "-.--", "--.."};