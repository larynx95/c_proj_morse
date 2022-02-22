/**********************************************************
 * Morse Code VERSION 7
 *********************************************************/

#include "code.h"

#include <stdlib.h>
#include <string.h>

const char *nums[] = {"-----", ".----", "..---", "...--", "....-",
                      ".....", "-....", "--...", "---..", "----."};

const char *alpha[] = {".-",   "-...", "-.-.", "-..",  ".",    "..-.", "--.",
                       "....", "..",   ".---", "-.-",  ".-..", "--",   "-.",
                       "---",  ".--.", "--.-", ".-.",  "...",  "-",    "..-",
                       "...-", ".--",  "-..-", "-.--", "--.."};

Msg *addnode(Msg *start, char *mcode) {
  Msg *new = malloc(sizeof(Msg));
  new->code = malloc(10 * sizeof(char));
  new->next = NULL;
  strcpy(new->code, mcode);

  Msg *ptr;
  if (start == NULL) {
    start = new;
  } else {
    ptr = start;
    while (ptr->next != NULL) {
      ptr = ptr->next;
    }
    ptr->next = new;
  }

  return start;
}

void del_nodes(Msg *start) {
  while (start != NULL) {
    Msg *ptr = start;
    start = start->next;

    strcpy(ptr->code, "");
    free(ptr->code);
    free(ptr);
  }
}

void print_nodes(Msg *start) {
  Msg *ptr = start;
  printf("Morse code: ");
  if (ptr == NULL)
    printf("Empty\n");
  else {
    while (ptr != NULL) {
      printf("%s ", ptr->code);
      ptr = ptr->next;
    }
  }
}

void char_up(char *str) {
  char *ptr = str;
  while (*ptr != '\0') {
    if (*ptr >= 'a' && *ptr <= 'z') *ptr = *ptr - ('a' - 'A');
    ptr++;
  }
}