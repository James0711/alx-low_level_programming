# C - Hello, World
## Preprocessor
Write a script that runs a C file through the preprocessor and save the result into another file.

The C file name will be saved in the variable $CFILE
The output should be saved in the file c

## Compiler
Write a script that compiles a C file but does not link.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .o instead of .c.
Example: if the C file is main.c, the output file should be main.o

## Assemble
Write a script that generates the assembly code of a C code and save it in an output file.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s
julien@ubuntu:~/c/0x00$ export CFILE=main.c

## Name
Write a script that compiles a C file and creates an executable named cisfun.

The C file name will be saved in the variable $CFILE
