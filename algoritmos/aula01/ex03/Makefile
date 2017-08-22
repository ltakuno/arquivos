#declare the variable
CC=gcc
CFLAGS=-c -Wall -std=c99

all: exemplo 

exemplo: main.o
	$(CC) main.o -o exemplo -lm 

main.o: main.c 
	$(CC) $(CFLAGS) main.c

clean:
	rm -rf *o exemplo 
