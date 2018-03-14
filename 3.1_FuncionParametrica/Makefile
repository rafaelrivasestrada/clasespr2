#Hola a todos :D
CC = g++
INC = -I ../include
OPC = -g

all: pruebaFuncionParametrica.exe

pruebaFuncionParametrica.exe:	pruebaFuncionParametrica.o
	g++ -g -o $@ $<

pruebaFuncionParametrica.o: pruebaFuncionParametrica.cpp
	g++ -g -I ../include -c $< -o $@

clean: 
	rm -f *.o *.exe
