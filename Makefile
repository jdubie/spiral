all: clean build run

clean:
	rm -f *.out

build:
	gcc main.c -o main.out

run:
	./main.out
