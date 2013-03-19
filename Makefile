all: clean build run

clean:
	rm -f *.out

build:
	gcc main.c -o main.out

run:
	./main.out 0  | diff s0.out.gold  -
	./main.out 1  | diff s1.out.gold  -
	./main.out 2  | diff s2.out.gold  -
	./main.out 3  | diff s3.out.gold  -
	./main.out 5  | diff s5.out.gold  -
