list: LinkedList.o main.o
	g++ -g main.o LinkedList.o -o list

LinkedList.o: LinkedList.h LinkedList.cc
	g++ -g -c LinkedList.cc

main.o: main.cc LinkedList.h
	g++ -g -c main.cc

run: list
	./list

clean:
	rm *.o list
