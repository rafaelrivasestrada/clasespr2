CC = g++
INC = -I ../include
OPC = -g -c
obj := $(patsubst %.cpp,%.o,$(wildcard *.cpp))
.cpp.o:
	$(CC) $(OPC) $(INC) $<
all:	prueba_foo.exe	

prueba_foo.exe: prueba_foo.o
	$(CC) prueba_foo.o -o prueba_foo.exe

clean:
	rm -fr *.o *.exe
