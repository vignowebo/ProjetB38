.SILENT:

CLASSES=Classes

CO=g++ -I$(CLASSES)
OBJS = $(CLASSES)/Voiture.o $(CLASSES)/Modele.o $(CLASSES)/Option.o $(CLASSES)/Personne.o $(CLASSES)/Intervenant.o $(CLASSES)/Client.o $(CLASSES)/Employe.o $(CLASSES)/Exception.o $(CLASSES)/OptionException.o $(CLASSES)/PasswordException.o
PROGRAMS = Test5 Test5_complet

all:	$(PROGRAMS)

Test5:	Test5.cpp $(OBJS)
	echo Creation de Test5...
	$(CO) Test5.cpp -o Test5 $(OBJS)

Test5_complet:	Test5_complet.cpp $(OBJS)
	echo Creation de Test5_complet...
	$(CO) Test5_complet.cpp -o Test5_complet $(OBJS)

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

$(CLASSES)/Exception.o:	$(CLASSES)/Exception.cpp $(CLASSES)/Exception.h
		echo Creation de Exception.o ...
		$(CO) -c $(CLASSES)/Exception.cpp
		mv Exception.o $(CLASSES)

$(CLASSES)/OptionException.o:	$(CLASSES)/OptionException.cpp $(CLASSES)/OptionException.h
		echo Creation de OptionException.o ...
		$(CO) -c $(CLASSES)/OptionException.cpp
		mv OptionException.o $(CLASSES)

$(CLASSES)/PasswordException.o:	$(CLASSES)/PasswordException.cpp $(CLASSES)/PasswordException.h
		echo Creation de PasswordException.o ...
		$(CO) -c $(CLASSES)/PasswordException.cpp
		mv PasswordException.o $(CLASSES)

clean:
	@rm -f $(OBJS) core

clobber:	clean
	@rm -f tags $(PROGRAMS) *~ *.log
