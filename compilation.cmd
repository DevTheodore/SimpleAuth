@echo off
gcc src/main.c -o bin/SimpleAuthExecutable -I include -L lib -lmingw32 -lSDL2main -lSDL2
pause