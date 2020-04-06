#include "Huisdier.h"
#include <string>
#pragma once
class Hamster : public Huisdier
{
public:
	Hamster(std::string naam);
	void maakGeluid() override;
	
};

