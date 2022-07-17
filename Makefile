CC = gcc
CFLAGS = -Wall --std=c99
EXEC = random

${EXEC}: main.c
	$(CC) main.c $(CFLAGS) -o $(EXEC).exe
