Lab01: main.o Node.o
	g++ -g main.o Node.o -o Lab01
main.o: main.cpp
	g++ -g -c main.cpp
Node.o: Node.cpp Node.h
	g++ -g -c Node.cpp
clean:
	rm *.o Lab01
