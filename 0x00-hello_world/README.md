# 0x00.C - Hello, World


## Requirements

## `C`
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall` `-Werror` `-Wextra` `-pedantic` `-std=gnu89`
- All your files should end with a new line
- A README.md file at the root of the repo, containing a description of the repository
- A README.md file, at the root of the folderof this project, containing a description of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use `system`
- Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`

## Shell Scripts
- All your scripts should be exactly two lines long ($ `wc -l` file should print 2)
- All your files should end with a new line
- The first line of all your files should be exactly `#!/bin/bash`




# Mandatory tasks

### [0-Preprocessor](./0-preprocessor)

Write a script that runs a C file through the preprocessor and save the result into another file.

- The C file name will be saved in the variable `$CFILE`
- The output should be saved in the file `c`

### [1-compiler](./1-compiler)

Write a script that compiles a C file but does not link.

- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension `.o` instead of .c

### [2-assembler](./2-assembler)

Write a script that generates the assembly code of a C code and save it in an output file.

- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension `.s` instead of .c.

### [3-name](./3-name)

Write a script that compiles a C file and creates an executable named cisfun.

- The C file name will be saved in the variable `$CFILE`

### [4-puts.c](./4-puts.c)

Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

- Use the function `puts`
- You are not allowed to use `printf`
- Your program should end with the value `0`

### [5-printf.c](./5-printf.c)

Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.

- Use the function printf
- You are not allowed to use the function `puts`
- Your program should return `0`
- Your program should compile without warning when using the `-Wall` gcc option

### [6-size.c](./6-size.c)

Write a C program that prints the size of various types on the computer it is compiled and run on.

- You should produce the exact same output as in the example
- Warnings are allowed
- Your program should return `0`
- You might have to install the package `libc6-dev-i386` on your Linux to test the `-m32` `gcc` option

```
gamachu@ubuntu:~/c/0x00$ gcc 6-size.c -m32 -o size32 2> /tmp/32
gamachu@ubuntu:~/c/0x00$ gcc 6-size.c -m64 -o size64 2> /tmp/64
gamachu@ubuntu:~/c/0x00$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
gamachu@ubuntu:~/c/0x00$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
gamachu@ubuntu:~/c/0x00$ echo $?
0
gamachu@ubuntu:~/c/0x00$ 
```

## Optional tasks

### [100-intel](./100-intel)

Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

- The C file name will be saved in the variable `$CFILE`.
- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.

```
gamachu@ubuntu:~/alx/allp/0x00$ export CFILE=main.c
gamachu@ubuntu:~/alx/allp/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
gamachu@ubuntu:~/alx/allp/0x00$ ./100-intel 
gamachu@ubuntu:~/alx/allp/0x00$ cat main.s
        .file   "main.c"
        .intel_syntax noprefix
        .text
        .globl  main
        .type   main, @function
main:
.LFB0:
        .cfi_startproc
        endbr64
        push    rbp
        .cfi_def_cfa_offset 16
        .cfi_offset 6, -16
        mov     rbp, rsp
        .cfi_def_cfa_register 6
        mov     eax, 0
        pop     rbp
        .cfi_def_cfa 7, 8
        ret
        .cfi_endproc
.LFE0:
        .size   main, .-main
        .ident  "GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.2) 9.4.0"
        .section        .note.GNU-stack,"",@progbits
        .section        .note.gnu.property,"a"
        .align 8
        .long    1f - 0f
        .long    4f - 1f
        .long    5
0:
        .string  "GNU"
1:
        .align 8
        .long    0xc0000002
        .long    3f - 2f
2:
        .long    0x3
3:
        .align 8
4:
```

### [101-quote.c](./101-quote.c)

Write a C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.

- You are not allowed to use any functions listed in the NAME section of the `man 3 printf` or `man 3 puts`
- Your program should return `1`
- Your program should compile without any warnings when using the `-Wall gcc` option

```
gamachu@ubuntu:~/alx/allp/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
gamachu@ubuntu:~/alx/allp/0x00$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
gamachu@ubuntu:~/alx/allp/0x00$ echo $?
1
gamachu@ubuntu:~/alx/allp/0x00$ ./quote 2> q
gamachu@ubuntu:~/alx/allp/0x00$ cat q
and that piece of art is useful" - Dora Korpar, 2015-10-19
gamachu@ubuntu:~/alx/allp/0x00$ grep printf < 101-quote.c
gamachu@ubuntu:~/alx/allp/0x00$ grep put < 101-quote.c
gamachu@ubuntu:~/alx/allp/0x00$ 
```

## Resources

### man or help
+ gcc
+ printf (3)
+ puts
+ putchar
+ write (2)


### Helpful Video Links
+ Learning to Program in C by [Jonathan Engelsma](https://www.youtube.com/playlist?list=PLkB3phqR3X40reMCBYSoNUPbDvM4kybMs)
+ Understanding C program Compilation Process by [HowTo](https://www.youtube.com/watch?v=VDslRumKvRA)

--------------------------------------------

Author: Gamachu AD
