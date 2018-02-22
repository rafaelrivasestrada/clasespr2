CPP= g++
OPC= -g 
INC= -I../include
LIB= 

default: pruebaPunto.exe

pruebaPunto.exe: pruebaPunto.o punto.o
	$(CPP) $(LIB) $(OPC) -o $@ $^

pruebaPunto.o: pruebaPunto.cpp
	$(CPP) $(OPC) $(INC) -c $^

punto.o: ../src/punto.cpp
	$(CPP) $(OPC) $(INC) -c $^
clean: 
	rm -f *.o *.exe
