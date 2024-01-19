#!/bin/bash
gcc -c 0-isupper.c 100-change.c 1-strncat.c 3-puts.c 4-strbprk.c _strlen.c 0-memset.c2-strchr.c 3-strcmp.c 5-strstr.c _strncpy.c 0-strcat.c 1-isdigit.c 2-strcpy.c 3-strspn.c 6-abs.c 100-atoi.c 1-memcpy.c 3-islower.c 4-isalpha.c _putchar.c

gcc -shared -o liball.so *.o
