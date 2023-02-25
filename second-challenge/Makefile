all: fibonacci.o
	gcc fibonacci.o main.c -o main

fibonacci.o: fibonacci.h
	gcc -c fibonacci.c

clean:
	rm -rf *.o
	rm -rf main

run:
	./main 1134903170