.SILENT:

CLASSES=Classes

CO=g++ -I$(CLASSES)
OBJS = $(CLASSES)/Modele.o  
PROGRAMS = Test1

all:	$(PROGRAMS)

Test1:	Test1.cpp $(CLASSES)/Modele.o
	echo Creation de Test1...
	$(CO) Test1.cpp -o Test1 $(CLASSES)/Modele.o

$(CLASSES)/Modele.o:	$(CLASSES)/Modele.cpp $(CLASSES)/Modele.h
		echo Creation de Modele.o ...
		$(CO) -c $(CLASSES)/Modele.cpp
		mv Modele.o $(CLASSES)

clean:
	@rm -f $(OBJS) core

clobber:	clean
	@rm -f tags $(PROGRAMS) *~ *.log
