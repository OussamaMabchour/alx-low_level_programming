#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
ar -rs liball.a *.o
ranlib liball.a
