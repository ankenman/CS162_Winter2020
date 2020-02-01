CC = g++
CPPFLAGS = -Wall -g -std=c++11
all:	practice_midterm.cc
	$(CC) $(CPPFLAGS)  -o midterm practice_midterm.cc

run: all
	./midterm

.PHONY: clean
clean:	
	$(info -- cleaning the direcotry --)
	rm -f midterm

