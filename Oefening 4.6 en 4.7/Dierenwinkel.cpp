#include "Dierenwinkel.h"

Dierenwinkel::Dierenwinkel()
{
	Dierenwinkel::lijst = std::vector<Huisdier*>();
}

void Dierenwinkel::voegToe(Huisdier *dier)
{
	Dierenwinkel::lijst.push_back(dier);
}

void Dierenwinkel::printLijst()
{
	/*
		dynamic_cast is de c++ versie van type casting voor classes in java. 
		dynamic_cast geeft een pointer wanneer er gecasted kan worden naar het type binnen de <>
		anders geeft het null.

	*/

	for (auto dier : Dierenwinkel::lijst) {
		if (Kat* kat = dynamic_cast<Kat*>(dier)) {
			std::cout << "Kat " << kat->getNaam() << std::endl;
		}else if (Hond* hond = dynamic_cast<Hond*>(dier)) {
			std::cout << "Hond " << hond->getNaam() << std::endl;
		}else if (Hamster* hamster = dynamic_cast<Hamster*>(dier)) {
			std::cout << "Hamster " << hamster->getNaam() << std::endl;
		}

	}
}
