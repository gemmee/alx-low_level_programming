#!/bin/bash
gcc -shared -fPIC -o win.so win.c
LD_PRELOAD=./win.so
