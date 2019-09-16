#!/bin/bash
gcc -fPIC -c holberton.h *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o
