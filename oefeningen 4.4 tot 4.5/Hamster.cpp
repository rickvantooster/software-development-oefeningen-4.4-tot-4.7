#include "Hamster.h"

Hamster::Hamster(std::string naam) : Huisdier(naam)
{
	
}

void Hamster::maakGeluid()
{
	std::cout << "*squeak*" << std::endl;
}


