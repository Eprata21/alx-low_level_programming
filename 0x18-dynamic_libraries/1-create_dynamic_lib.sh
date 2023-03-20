#!/bin/bash
gcc -Wall -Werror -pendamic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
nm -D liball.so
