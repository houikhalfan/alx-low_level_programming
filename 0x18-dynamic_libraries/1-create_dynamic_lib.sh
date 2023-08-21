#!/bin/bash
gcc -fPIX -c *.c && gcc -shared -o liball.so *.o
