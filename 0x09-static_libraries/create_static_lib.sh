#!/bin/bash
gcc -c -Wall -Wextra -pedantic -Werror *.c
ar -rc liball.a *.o
