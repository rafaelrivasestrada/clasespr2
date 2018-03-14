CC= g++
OPC= -g 
INC= -I../include
LIB= 

default: pruebaPila.exe

pruebaPila.exe: pruebaPila.o
	$(CC) $(LIB) $(OPC) -o $@ $<

pruebaPila.o: pruebaPila.cpp  ../include/pila.h ../include/snodo.h
	$(CC) $(OPC) $(INC) -c $<

clean: 
	rm -f *.o *.exe
