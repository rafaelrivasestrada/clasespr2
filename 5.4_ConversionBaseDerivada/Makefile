CC = g++
OPCC = -I../include -g -c
LIB =

all: pecera.exe

pecera.exe: pecera.o 
	$(CC) -o pecera.exe pecera.o 

pecera.o: pecera.cpp 
	$(CC) $(OPCC) pecera.cpp

clean:
	rm -f *.exe *.o
