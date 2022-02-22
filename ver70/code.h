/**********************************************************
 * Morse Code VERSION 7
 *********************************************************/

#ifndef CODE_H_
#define CODE_H_

#include <stdio.h>

typedef struct {
  char *code;
  struct Msg *next;
} Msg;

Msg *addnode(Msg *start, char *mcode);
void del_nodes(Msg *start);
void print_nodes(Msg *start);
void char_up(char *);

extern const char *nums[];
extern const char *alpha[];

#endif
