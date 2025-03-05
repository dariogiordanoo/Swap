all: main

clean: main main.o swap.o
	rm -f main main.o swap.o

main: main.o swap.o
	gcc main.o swap.o -o main

main.o: main.c swap.h
	gcc -c main.c -o main.o

swap.o: swap.c swap.h
	gcc -c swap.c -o swap.o