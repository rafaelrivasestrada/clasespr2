CC = g++
INC = -I.
OPC = -g -c


all:	 pruebaColaBasica.exe

pruebaColaBasica.exe:	cola.o pruebaColaBasica.o
	$(CC) -o $@ $^

cola.o:	cola.cpp
	$(CC) $(OPC) $(INC) $<

pruebaColaBasica.o:	pruebaColaBasica.cpp
	$(CC) $(OPC) $(INC)  $<
clean:
	rm -fr *.o *.exe

# En caso de duda de la sintaxis del Makefile ver:
# http://arco.esi.uclm.es/~david.villa/doc/repo/make/make.html
