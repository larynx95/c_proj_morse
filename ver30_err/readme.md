# Morse Code Encoder/Decoder, version 3

## About this version (ERROR)

- This version of code is not wroking. `cmake` builds and `make` creates a executable without error, but When I run this code, I get a runtime error. Is it because there are too many elements in both `ascii` and `code` arrays? Is it because the array is created on the stack, not the heap?

  ```cmd
  Enter telegram message: a
                         What you've entered: a, 1
  What you've entered: A
      0 [main] gcc_morse 1548 cygwin_exception::open_stackdumpfile: Dumping stack trace to gcc_morse.exe.stackdump
  ```

- In this code, there are one `array of characters` with 90 characters and `array of pointers to character type` with 90 strings.

## Questions

- [Should I use #include in headers?](https://stackoverflow.com/questions/1804486/should-i-use-include-in-headers)
- [Include headers in header file?](https://stackoverflow.com/questions/2679373/include-headers-in-header-file)
- [Including #includes in header file vs source file](https://stackoverflow.com/questions/2596449/including-includes-in-header-file-vs-source-file)
- [How do I use extern to share variables between source files?](https://stackoverflow.com/questions/1433204/how-do-i-use-extern-to-share-variables-between-source-files)
