CXX = g++ -std=gnu++0x
CFLAGS = -I../include -g -c
CPROGRAMOUT = pecera.exe
CPROGRAMIN = pecera.o  
CPROGRAM = pecera.cpp
CLIBRARYIN = habitante.o
CLIBRARY = ../src/habitante.cpp
CLIBRARYIN1 = planta.o
CLIBRARY1 = ../src/planta.cpp
CLIBRARYIN2 = molusco.o
CLIBRARY2 = ../src/molusco.cpp
CLIBRARYIN3 = pez.o
CLIBRARY3 = ../src/pez.cpp
all: $(CPROGRAMOUT)

$(CPROGRAMOUT): $(CPROGRAMIN) $(CLIBRARYIN) $(CLIBRARYIN1) $(CLIBRARYIN2) $(CLIBRARYIN3)
	$(CXX) $^ -o $@
$(CPROGRAMIN): $(CPROGRAM)
	$(CXX) $(CFLAGS) $^
$(CLIBRARYIN): $(CLIBRARY)
	$(CXX) $(CFLAGS) $^
$(CLIBRARYIN1): $(CLIBRARY1)
	$(CXX) $(CFLAGS) $^ 
$(CLIBRARYIN2): $(CLIBRARY2)
	$(CXX) $(CFLAGS) $^ 
$(CLIBRARYIN3): $(CLIBRARY3)
	$(CXX) $(CFLAGS) $^		 
clean:
	rm *.exe *.o
