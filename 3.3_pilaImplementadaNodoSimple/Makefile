CC = g++
INC = -I.
OPC = -g -c


all:	 pruebaPilaBasica.exe

pruebaPilaBasica.exe:	pila.o pruebaPilaBasica.o
	$(CC) -o $@ $^

pila.o:	pila.cpp
	$(CC) $(OPC) $(INC) $<

pruebaPilaBasica.o:	pruebaPilaBasica.cpp
	$(CC) $(OPC) $(INC)  $<
clean:
	rm -fr *.o *.exe

# En caso de duda de la sintaxis del Makefile ver:
# http://arco.esi.uclm.es/~david.villa/doc/repo/make/make.html
