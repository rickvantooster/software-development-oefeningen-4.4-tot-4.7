#include "Huisdier.h"

Huisdier::Huisdier(std::string naam)
{
	Huisdier::naam = naam;
}

std::string Huisdier::getNaam()
{
	return naam;
}

void Huisdier::maakGeluid()
{
	std::cout << "..." << std::endl;
}
