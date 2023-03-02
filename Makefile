OBJECTS=List.o main.o Node.o
CXXFLAGS=-g

main: $(OBJECTS)
	g++ -g -o main $(OBJECTS)

List.o: List.cpp Node.h List.h
	g++ -c List.cpp Node.h List.h

main.o: main.cpp List.h Node.h
	g++ -c main.cpp

Node.o: Node.cpp Node.h
	g++ -c Node.cpp

clean:
	rm -f $(OBJECTS)

	