CC = g++
CFLAGS = -g -I../include -c
LIBSCPP =

all:	estructuras.exe

estructuras.exe: main.o cambiar_s_punto.o
	$(CC) -o estructuras.exe main.o cambiar_s_punto.o

main.o:	main.cpp
	$(CC) $(CFLAGS) main.cpp

cambiar_s_punto.o: ../src/cambiar_s_punto.cpp
	$(CC) $(CFLAGS) ../src/cambiar_s_punto.cpp

clean:
	rm -f *.exe *.o core
