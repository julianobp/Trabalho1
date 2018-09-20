IDIR = ../Headers
CC = g++
CFLAGS = -std=c++11 -I$(IDIR) -g

ODIR = ../Objects
LDIR = ../lib

LIBS = -lm

<<<<<<< HEAD
_DEPS = dominios.h entidades.h testesDominios.h testesEntidades.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = dominios.o entidades.o testesDominios.o testesEntidades.o main.o
=======
_DEPS = dominios.h entidades.h testes.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = dominios.o entidades.o testes.o main.o
>>>>>>> remotes/origin/master
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 