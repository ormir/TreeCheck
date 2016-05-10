main: main.o note.o
	g++ -std=c++11 main.o note.o -o treecheck

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

note.o: note.cpp note.hpp
	g++ -std=c++11 -c note.cpp 

start: main
	./treecheck numb.txt

clean: 
	rm *.o treecheck