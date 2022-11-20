.SILENT:

CLASSES=Classes

CO=g++ -I$(CLASSES)
OBJS = $(CLASSES)/Voiture.o $(CLASSES)/Modele.o $(CLASSES)/Option.o $(CLASSES)/Personne.o $(CLASSES)/Intervenant.o $(CLASSES)/Client.o $(CLASSES)/Employe.o
PROGRAMS = Test4

all:	$(PROGRAMS)

Test4:	Test4.cpp $(OBJS)
	echo Creation de Test4...
	$(CO) Test4.cpp -o Test4 $(OBJS)

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

$(CLASSES)/Personne.o:	$(CLASSES)/Personne.cpp $(CLASSES)/Personne.h
		echo Creation de Personne.o ...
		$(CO) -c $(CLASSES)/Personne.cpp
		mv Personne.o $(CLASSES)

$(CLASSES)/Intervenant.o:	$(CLASSES)/Intervenant.cpp $(CLASSES)/Intervenant.h
		echo Creation de Intervenant.o ...
		$(CO) -c $(CLASSES)/Intervenant.cpp
		mv Intervenant.o $(CLASSES)

$(CLASSES)/Client.o:	$(CLASSES)/Client.cpp $(CLASSES)/Client.h
		echo Creation de Client.o ...
		$(CO) -c $(CLASSES)/Client.cpp
		mv Client.o $(CLASSES)

$(CLASSES)/Employe.o:	$(CLASSES)/Employe.cpp $(CLASSES)/Employe.h
		echo Creation de Employe.o ...
		$(CO) -c $(CLASSES)/Employe.cpp
		mv Employe.o $(CLASSES)

clean:
	@rm -f $(OBJS) core

clobber:	clean
	@rm -f tags $(PROGRAMS) *~ *.log
