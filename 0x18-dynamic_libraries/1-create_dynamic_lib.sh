#!/bin/bash

# Compile all .c files into object files
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up: remove the object files
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
