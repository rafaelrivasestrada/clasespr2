#Hola a todos :D
CC = g++
INC = -I ../include
OPC = -g

all: programa.exe

programa.exe: 
	g++ -g -o $@ $^

programa.o: main.cpp
	g++ -g -I ../include -c $^

source.o: ../src/source.cpp
	g++ -g -I ../include -c $^

clean: 
	rm -f *.o *.exe
