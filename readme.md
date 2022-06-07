# Morse Code Encoder/Decoder (my practice)

2020.06.28  
2022.06.03 again

## Environment

### Windows 10
- Install Cygwin64

  - Then, install `gcc-core`, `make`, `cmake` for C programming
  - `libsqlite3-devel` for SQLite database

### WSL2, Windows 11 (better)

- Install WSL2 in Windows 11 
- Install gcc, g++, gdb, make, cmake
- Install Vscode

## Refererences 

- [Creating a stereo WAV file using](https://stackoverflow.com/questions/23030980/creating-a-stereo-wav-file-using-c)
- [Write a WAV file from scratch - C++ Audio Programming](https://www.youtube.com/watch?v=qqjvB_VxMRM)

## Versions

### Version 00

- Play sound `*.wav` file

### Version 10

- Single-file, No data, Simple conditional statement

### Version 20

- Single-file, ASCII-index Array data, Print text

### Version 30

- Multi-files, ASCII-index Array data, Print text (**ERROR**)

### Version 40

- Multi-files, ASCII-index Array data (**REDUCED SIZE**), Print text

### Version 50

- Multi-files, ASCII-index (**CALCULATED INDEX**) Array data, Print text

### Version 60

- Multi-files, ASCII-index (calculated index) Array data, **PLAY SOUND**

### Version 70

- Multi-files, **LINKED LIST** data, Print text

### Version 80

- Multi-files, linked list data, **CREATE WAV FILE**

### Version 90

- Multi-files, linked list data, Huffman coding

  ```txt
  start ┌ E ┌ I ┌ S ┌ H ┌ 5
        │   │   │   │   └ 4
        │   │   │   └ V ┌ Ŝ
        │   │   │       └ 3
        │   │   └ U ┌ F ┌ É
        │   │       │   └
        │   │       └ Ü ┌ Đ ┌ ?
        │   │           │   └
        │   │           └ 2
        │   └ A ┌ R ┌ L ┌
        │       │   │   └ È ┌ "
        │       │   │       └
        │       │   └ Ä ┌ + ┌
        │       │       │   └ .
        │       │       └
        │       └ W ┌ P ┌ Þ
        │           │   └ À
        │           └ J ┌ Ĵ
        │               └ 1 ┌ '
        │                   └
        └ T ┌ N ┌ D ┌ B ┌ 6 ┌
            │   │   │   │   └ -
            │   │   │   └ =
            │   │   └ X ┌ /
            │   │       └
            │   └ K ┌ C ┌ Ç
            │       │   └
            │       └   ┌ ;
            │           └ !
            └ M ┌ G ┌ Z ┌ 7
                │   │   └   ┌
                │   │       └ ,
                │   └ Q ┌ Ĝ
                │       └ Ñ
                └ O ┌ Ö ┌ 8 ┌ :
                    │   │   └
                    │   └
                    └ CH ┌ 9
                        └ 0
  ```

## Questions

- [Should I use #include in headers?](https://stackoverflow.com/questions/1804486/should-i-use-include-in-headers)
- [Include headers in header file?](https://stackoverflow.com/questions/2679373/include-headers-in-header-file)
- [Including #includes in header file vs source file](https://stackoverflow.com/questions/2596449/including-includes-in-header-file-vs-source-file)
- [How do I use extern to share variables between source files?](https://stackoverflow.com/questions/1433204/how-do-i-use-extern-to-share-variables-between-source-files)
- Which is the data structure for characters and morse code?
- [Taking String input with space in C (3 Different Methods)](https://www.geeksforgeeks.org/taking-string-input-space-c-3-different-methods/)


## References

- [StackOverflow: How to use PlaySound in C](https://stackoverflow.com/questions/29998655/how-to-use-playsound-in-c)
- [C programming.com](https://www.cprogramming.com/tutorial.html#c++tutorial)
- [Morse Code Translator](https://morsecode.world/international/translator.html)
- [Audio File Format Specifications](http://www-mmsp.ece.mcgill.ca/Documents/AudioFormats/WAVE/WAVE.html)
- [모스신호 wav 파일 생성하기](https://wogh8732.tistory.com/66)
- [웨이브(.wav) 파일 분석](https://crystalcube.co.kr/123)
- [morse 생성 사이트](https://jinh.kr/morse/)
