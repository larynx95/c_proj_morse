/**********************************************************
 * Morse Code VERSION 0
 *********************************************************/

#include <stdio.h>     // standard io
#include <windows.h>   // for PlaySound
#include <windowsx.h>  // for PlaySound

int main(int argc, char *argv[]) {
  PlaySound(TEXT("../../dah.wav"), NULL, SND_FILENAME);

  return 0;
}
