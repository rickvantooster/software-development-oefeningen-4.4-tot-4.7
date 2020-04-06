#include "Huisdier.h"
#pragma once
class Hond : public Huisdier
{
public:
	Hond(std::string naam);
	void maakGeluid() override;
	void kwispel();
};

