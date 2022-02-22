/**********************************************************
 * Morse Code VERSION 2
 *********************************************************/

#include <ctype.h>     // for toupper
#include <stdio.h>     // standard io
#include <string.h>    // for string manipulation
#include <windows.h>   // for PlaySound
#include <windowsx.h>  // for PlaySound

/**********************************************************
 * function protocols
 *********************************************************/

void mytolower(char *);
void mytoupper(char *);
void mytoupper2(char *);

/**********************************************************
 * main function
 *********************************************************/

int main(int argc, char *argv[]) {
  /* data: ASCII number - character */
  char ascii[90] = {""};
  ascii[48] = '0';
  ascii[49] = '1';
  ascii[50] = '2';
  ascii[51] = '3';
  ascii[52] = '4';
  ascii[53] = '5';
  ascii[54] = '6';
  ascii[55] = '7';
  ascii[56] = '8';
  ascii[57] = '9';

  ascii[65] = 'A';
  ascii[66] = 'B';
  ascii[67] = 'C';
  ascii[68] = 'D';
  ascii[69] = 'E';
  ascii[70] = 'F';
  ascii[71] = 'G';
  ascii[72] = 'H';
  ascii[73] = 'I';
  ascii[74] = 'J';
  ascii[75] = 'K';
  ascii[76] = 'L';
  ascii[77] = 'M';
  ascii[78] = 'N';
  ascii[79] = 'O';
  ascii[80] = 'P';
  ascii[81] = 'Q';
  ascii[82] = 'R';
  ascii[83] = 'S';
  ascii[84] = 'T';
  ascii[85] = 'U';
  ascii[86] = 'V';
  ascii[87] = 'W';
  ascii[88] = 'X';
  ascii[89] = 'Y';
  ascii[90] = 'Z';

  /* array of translated code */
  char *code[90];
  strcpy(code + 48, "dah-dah-dah-dah-dah");  // 0
  strcpy(code + 49, "di-dah-dah-dah-dah");   // 1
  strcpy(code + 50, "di-di-dah-dah-dah");    // 2
  strcpy(code + 51, "di-di-di-dah-dah");     // 3
  strcpy(code + 52, "di-di-di-di-dah");      // 4
  strcpy(code + 53, "di-di-di-di-dit");      // 5
  strcpy(code + 54, "dah-di-di-di-dit");     // 6
  strcpy(code + 55, "dah-dah-di-di-dit");    // 7
  strcpy(code + 56, "dah-dah-dah-di-dit");   // 8
  strcpy(code + 57, "dah-dah-dah-dah-dit");  // 9

  strcpy(code + 65, "di-dah");          // A
  strcpy(code + 66, "dah-di-di-dit");   // B
  strcpy(code + 67, "dah-di-dah-dit");  // C
  strcpy(code + 68, "dah-di-dit");      // D
  strcpy(code + 69, "dit");             // E
  strcpy(code + 70, "di-di-dah-dit");   // F
  strcpy(code + 71, "dah-dah-dit");     // G
  strcpy(code + 72, "di-di-di-dit");    // H
  strcpy(code + 73, "di-dit");          // I
  strcpy(code + 74, "di-dah-dah-dah");  // J
  strcpy(code + 75, "dah-di-dah");      // K
  strcpy(code + 76, "di-dah-di-dit");   // L
  strcpy(code + 77, "dah-dah");         // M
  strcpy(code + 78, "dah-dit");         // N
  strcpy(code + 79, "dah-dah-dah");     // O
  strcpy(code + 80, "di-dah-dah-dit");  // P
  strcpy(code + 81, "dah-dah-di-dah");  // Q
  strcpy(code + 82, "di-dah-dit");      // R
  strcpy(code + 83, "di-di-dit");       // S
  strcpy(code + 84, "dah");             // T
  strcpy(code + 85, "di-di-dah");       // U
  strcpy(code + 86, "di-di-di-dah");    // V
  strcpy(code + 87, "di-dah-dah");      // W
  strcpy(code + 88, "dah-di-di-dah");   // X
  strcpy(code + 89, "dah-di-dah-dah");  // Y
  strcpy(code + 90, "dah-dah-di-dit");  // Z

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
  printf("Morse code: ");
  for (int i = 0; i < len; i++) {
    if (*(ptr + i) == ' ') {
      printf("   ");
    }
    for (int j = 0; j < 91; j++) {
      if (*(ptr + i) == ascii[j]) {
        printf("%s ", code + j);
      }
    }
  }

  char *sam = "abCDef aBcD";
  mytoupper2(sam);
  printf("\n%s\n", sam);

  // PlaySound(TEXT("dah.wav"), NULL, SND_FILENAME);

  return 0;
}

/**********************************************************
 * function definitions
 *********************************************************/

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