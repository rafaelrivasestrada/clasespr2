#Hola a todos :D
CC = g++
INC = -I ../include
OPC = -g

all: programa.exe

programa.exe:	programa.o semaforo.o
	g++ -g -o $@ $^

programa.o: main.cpp
	g++ -g -I ../include -c $< -o $@

semaforo.o: ../src/semaforo.cpp
	g++ -g -I ../include -c $<

clean: 
	rm -f *.o *.exe
