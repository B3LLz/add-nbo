#Makefile
all: add-nbo

add-nbo: main.o nbo2hbo.o
	gcc -o add-nbo main.o nbo2hbo.o

main.o: nbo2hbo.h main.c

nbo2hbo.o: nbo2hbo.h nbo2hbo.c

clean:
	rm -f add-nbo
	rm -f *.o
