objects = main.o vector2d.o vector3d.o
headers = vector/vector2d.h vector/vector3d.h
coptions = -Wall -g -ggdb

all: penguine

penguine: ${objects}
	g++ ${objects} -o testEngine

main.o: main.cpp ${headers}
	g++ -c ${coptions} main.cpp

vector2d.o: vector/vector2d.cpp vector/vector2d.h
	g++ -c ${coptions} vector/vector2d.cpp

vector3d.o: vector/vector3d.cpp vector/vector3d.h
	g++ -c ${coptions} vector/vector3d.cpp

clean:
	-rm -f *.o testEngine