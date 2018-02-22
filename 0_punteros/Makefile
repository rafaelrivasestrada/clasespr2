CC = g++
COPC = -g -c

all:	punteros.exe

punteros.exe:	punteros.o 
	$(CC)  -o punteros.exe punteros.o 

punteros.o: 	punteros.cpp
	$(CC) $(COPC) punteros.cpp

clean:
	rm -f *.o *.exe core
