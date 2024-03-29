all: main.o construction.o
	gcc -o struct main.o construction.o

main.o: main.c construction.h
	gcc -c main.c

construction.o: construction.c construction.h
	gcc -c construction.c
	
run: 
	./struct

clean:
	rm struct main.o construction.o