CC = g++
INC =  
OPC = -g -c


all:	 pruebaColaSTD.exe

pruebaColaSTD.exe:	pruebaColaSTD.o
	$(CC) -o $@ $^


pruebaColaSTD.o:	pruebaColaSTD.cpp
	$(CC) $(OPC) $(INC)  $<
clean:
	rm -fr *.o *.exe

# En caso de duda de la sintaxis del Makefile ver:
# http://arco.esi.uclm.es/~david.villa/doc/repo/make/make.html
