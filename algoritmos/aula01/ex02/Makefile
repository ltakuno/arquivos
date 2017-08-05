#declare the variable
CC=gcc
CFLAGS=-c -Wall -std=c99

all: hello 

hello: main.o
	$(CC) main.o -o hello 

main.o: main.c 
	$(CC) $(CFLAGS) main.c

clean:
	rm -rf *o hello
