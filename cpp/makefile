CC = g++
CFLAGS = -c -g -std=c++17 -Wextra -Wall -pedantic

main: main.o MergeSort.o
	${CC} main.o MergeSort.o -o main
main.o: main.cpp
	${CC} ${CFLAGS} main.cpp
MergeSort.o: MergeSort.cpp MergeSort.h
	${CC} ${CFLAGS} MergeSort.cpp

test1: main
	./main < ../tests/test1.txt > output.txt
test2: main
	./main < ../tests/test2.txt > output.txt

clean:
	rm main main.o MergeSort.o output.txt