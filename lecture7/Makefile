CPPFLAGS=

rectangle: rectangle.o main.o
	g++ main.o rectangle.o -o rect

rectangle.o: rectangle.h rectangle.cc
	g++ -c rectangle.cc

main.o: main.cc rectangle.h
	g++ -c main.cc

debug: main.cc rectangle.o
	g++ -g -c -DDEBUG main.cc
	g++ -g main.o rectangle.o -o debug-rect

test: rectangle.cc
	g++ -g -DDEBUG rectangle.cc -o test-rect

clean:
	rm *.o rect
