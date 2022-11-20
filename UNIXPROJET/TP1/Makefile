.SILENT:

HASH=Hash

CO=g++ -I$(HASH)
OBJS = $(HASH)/Hash.o 
PROGRAMS = Applic1

all:	$(PROGRAMS)

Applic1:	Applic1.cpp $(OBJS)
	echo Creation de Applic1...
	$(CO) Applic1.cpp -o Applic1 $(OBJS)

$(HASH)/Hash.o:	$(HASH)/Hash.cpp $(HASH)/Hash.h
		echo Creation de Hash.o ...
		$(CO) -c $(HASH)/Hash.cpp
		mv Hash.o $(HASH)
clean:
	@rm -f $(OBJS) core
