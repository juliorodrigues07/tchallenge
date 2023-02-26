all: reverse.o
	gcc reverse.o main.c -o main

reverse.o: reverse.h
	gcc -c reverse.c

clean:
	rm -rf *.o
	rm -rf main

run:
	./main target