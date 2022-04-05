CC=g++
CFLAGS= -Wall -g


all=main.o LinkedList.o Node.o
linkedlist: ${all}
	${CC} ${CFLAGS} main.o LinkedList.o Node.o -o linkedlist

main.o: main.cpp LinkedList.h LinkedList.cpp
	${CC} ${CFLAGS} -c main.cpp 

Node.o: Node.cpp Node.h LinkedList.h  LinkedList.cpp
	${CC} ${CFLAGS} -c  Node.cpp

LinkedList: LinkedList.cpp LinkedList.h Node.h Node.cpp
	${CC} ${CFLAGS} -c linkedlist.cpp

clean: 
	rm ${all}