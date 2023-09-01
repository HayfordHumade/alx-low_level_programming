#!/bin/bash
# compiles *.c into *.o
gcc -c *.c
# creates a static library named "all" using *.o
ar rc liball.a *.o
