#!/bin/bash

for file in *.c
do
gcc -c -o ${file%.c}.o $file
done
ar rcs liball.a *.o
rm -f *.o
