.SILENT:

CLASSES=Classes

CO=g++ -I$(CLASSES)
OBJS = $(CLASSES)/Voiture.o $(CLASSES)/Modele.o $(CLASSES)/Option.o  
PROGRAMS = Test2a Test2b Test2c

all:	$(PROGRAMS)

Test2a:	Test2a.cpp $(OBJS)
	echo Creation de Test2a...
	$(CO) Test2a.cpp -o Test2a $(OBJS)

Test2b:	Test2b.cpp $(OBJS)
	echo Creation de Test2b...
	$(CO) Test2b.cpp -o Test2b $(OBJS)

Test2c:	Test2c.cpp $(OBJS)
	echo Creation de Test2c...
	$(CO) Test2c.cpp -o Test2c $(OBJS)

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
