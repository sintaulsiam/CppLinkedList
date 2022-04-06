CC=g++
CFLAGS= -Wall -g


all=main.o src/LinkedList.o src/Node.o
linkedlist: ${all}
	${CC} ${CFLAGS} main.o src/LinkedList.o src/Node.o -o linkedlist

main.o: main.cpp src/LinkedList.h src/LinkedList.cpp
	${CC} ${CFLAGS} -c main.cpp 

Node.o: src/Node.cpp src/Node.h src/LinkedList.h  src/LinkedList.cpp
	${CC} ${CFLAGS} -c  src/Node.cpp

LinkedList: src/LinkedList.cpp src/LinkedList.h src/Node.h src/Node.cpp
	${CC} ${CFLAGS} -c src/linkedlist.cpp

clean: 
	rm ${all}