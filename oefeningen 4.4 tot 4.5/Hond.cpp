#include "Hond.h"

Hond::Hond(std::string naam) : Huisdier(naam) {

}

void Hond::maakGeluid(){
	std::cout << "*Woef*" << std::endl;
}

void Hond::kwispel() {
	std::cout << "*kwispel*" << std::endl;
}
