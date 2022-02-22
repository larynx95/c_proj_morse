# Morse Code Encoder/Decoder, version 6

## About this version

- In this verion of code, it sounds!
- For Morse code to sound perfectly, you need to know how long the sound lasts. (a) time for `dah`, (b) time for `dit` or `di`, (c) time gap between two consecutive characters in a word, (d) time gap between two words, (e) time gap between two sentences.

  ```txt
          1         2         3         4         5         6         7         8
  12345678901234567890123456789012345678901234567890123456789012345678901234567890123456789

  M------   O----------   R------   S----   E       C----------   O----------   D------   E

  ===.===...===.===.===...=.===.=...=.=.=...=.......===.=.===.=...===.===.===...===.=.=...=
    ^               ^    ^       ^             ^
    |              dah  dit      |             |
  symbol space                letter space    word space

  For example,
  (a) `dah`                                  : 300 miliseconds ?
  (b) `dit` or `di`                          : 100 miliseconds ?
  (c) time gap bw two characters in a word   : 300 miliseconds ?
  (d) time gap bw two words                  : 700 miliseconds ?
  (e) time gap bw two sentences              : ??
  ```

- We need a completely new sound source file whose duration is accurately calculated.
