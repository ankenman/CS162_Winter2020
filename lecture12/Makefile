linkedlist: LinkedList.o main.o
	g++ main.o rectangle.o -o list

LinkedList.o: LinkedList.h LinkedList.cc
	g++ -c LinkedList.cc

main.o: main.cc LinkedList.h
	g++ -c main.cc

clean:
	rm *.o list
