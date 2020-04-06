#include <iostream>
#include "Hamster.h"
#include "Hond.h"
#include "Kat.h"
#include "Huisdier.h"


int main() {

	/*
		4.4 
		a) mag niet omdat een string voor de naam een required parameter is bij de constructor.
		d) mag niet omdat de class Huisdier niet elke methode heeft die de class Kat heeft.
		g) mag niet omdat de class Huisdier geen methode heeft met de naam spin. Deze staat wel in de class Kat 
			Dus in dit geval zou je de variabele kat dynamisch moeten casten naar de type Kat en dan zou het wel kunnen.
		i) mag niet omdat de statsiche type hamster is en deze heeft geen methode kwispel() 
			Daarnaast kan dit niet omdat de class hond geen overerving heeft uit de class Hamster
	*/


	Kat kat1("felix");
	Hond hond1("Bobby");
	Hamster hamster1("knabbel");

	

	kat1.maakGeluid();
	kat1.spin();

	hond1.kwispel();
	hond1.maakGeluid();

	hamster1.maakGeluid();

	return 0;
}