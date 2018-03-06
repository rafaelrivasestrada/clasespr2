CC = g++
OPCC = -I../include -g -c
LIB =

all: prueba_interruptor.exe

prueba_interruptor.exe: prueba_interruptor.o interruptor.o
	$(CC) -o prueba_interruptor.exe prueba_interruptor.o interruptor.o

prueba_interruptor.o: prueba_interruptor.cpp ../include/interruptor.h
	$(CC) $(OPCC) prueba_interruptor.cpp


interruptor.o: ../src/interruptor.cpp ../include/interruptor.h
	$(CC) $(OPCC) ../src/interruptor.cpp

clean:
	rm -f *.exe *.o
