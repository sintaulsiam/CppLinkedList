all=main.o LinkedList.o Node.o
linkedlist: ${all}
	g++ main.o  LinkedList.o Node.o -o linkedlist

main.o: 
	g++ -c main.cpp 

Node.o:
	g++ -c Node.cpp

LinkedList:
	g++ -c linkedlist.cpp

clean: 
	rm ${all}