CC= gcc
OPC= -g 
INC= -I../include
LIB= 

default: pruebaLapsoTiempo.exe

pruebaLapsoTiempo.exe: pruebaLapsoTiempo.o lapsoTiempo.o
	$(CC) $(LIB) $(OPC) -o $@ $^

pruebaLapsoTiempo.o: pruebaLapsoTiempo.c
	$(CC) $(OPC) $(INC) -c $^

lapsoTiempo.o: ../src/lapsoTiempo.c
	$(CC) $(OPC) $(INC) -c $^
clean: 
	rm -f *.o *.exe
