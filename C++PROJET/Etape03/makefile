.SILENT:

CLASSES=Classes

CO=g++ -I$(CLASSES)
OBJS = $(CLASSES)/Voiture.o $(CLASSES)/Modele.o $(CLASSES)/Option.o  
PROGRAMS = Test3

all:	$(PROGRAMS)

Test3:	Test3.cpp $(OBJS)
	echo Creation de Test3...
	$(CO) Test3.cpp -o Test3 $(OBJS)

$(CLASSES)/Modele.o:	$(CLASSES)/Modele.cpp $(CLASSES)/Modele.h
		echo Creation de Modele.o ...
		$(CO) -c $(CLASSES)/Modele.cpp
		mv Modele.o $(CLASSES)

$(CLASSES)/Option.o:	$(CLASSES)/Option.cpp $(CLASSES)/Option.h
		echo Creation de Option.o ...
		$(CO) -c $(CLASSES)/Option.cpp
		mv Option.o $(CLASSES)

$(CLASSES)/Voiture.o:	$(CLASSES)/Voiture.cpp $(CLASSES)/Voiture.h
		echo Creation de Voiture.o ...
		$(CO) -c $(CLASSES)/Voiture.cpp
		mv Voiture.o $(CLASSES)

clean:
	@rm -f $(OBJS) core

clobber:	clean
	@rm -f tags $(PROGRAMS) *~ *.log
