#include "Huisdier.h"
#pragma once
class Kat : public Huisdier
{
public:
	Kat(std::string naam);
	void maakGeluid() override;
	void spin();
	//void maakGeluid() override;
};

