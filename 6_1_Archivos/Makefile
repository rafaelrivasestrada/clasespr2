CC = g++
INC =  
OPC = -g -c


all:	 escribeNumero.exe escribeNumeroB.exe leeNumero.exe leeNumeroB.exe

escribeNumero.exe:	escribeNumero.o
	$(CC) -o $@ $^

escribeNumero.o:	escribeNumero.cpp
	$(CC) $(OPC) $(INC)  $<


leeNumero.exe:	leeNumero.o
	$(CC) -o $@ $^

leeNumero.o:	leeNumero.cpp
	$(CC) $(OPC) $(INC)  $<

escribeNumeroB.exe:	escribeNumeroB.o
	$(CC) -o $@ $^

escribeNumeroB.o:	escribeNumeroB.cpp
	$(CC) $(OPC) $(INC)  $<

leeNumeroB.exe:	leeNumeroB.o
	$(CC) -o $@ $^

leeNumeroB.o:	leeNumeroB.cpp
	$(CC) $(OPC) $(INC)  $<

clean:
	rm -fr *.o *.exe datos.*

# En caso de duda de la sintaxis del Makefile ver:
# http://arco.esi.uclm.es/~david.villa/doc/repo/make/make.html
