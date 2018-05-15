#Este make aparte de compilar, ejecuta todos los .exe

VERSION = -std=c++11


all: 1.exe 2.exe 3.exe 4.exe

1.exe:
	g++ 1.cpp -o 1.exe
	./$(@)

2.exe: 1.exe
	g++ 2.cpp -o 2.exe
	./$(@)

3.exe: 1.exe
	g++ 3.cpp -o 3.exe
	./$(@)

4.exe: 1.exe
	g++ $(VERSION) 4.cpp -o 4.exe
	./$(@)

clean:
	rm -f *.txt *.exe core

