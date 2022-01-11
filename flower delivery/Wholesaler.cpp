#include "Wholesaler.h"

Wholesaler::Wholesaler(std::string name ,Grower* grower):Person(name),grower(grower)
{
}

FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> flower)
{
	std::cout << "Wholesaler " + getName() + " forwards the request to Grower " + grower->getName()+"."<< std::endl;
	FlowersBouquet* myFlower = grower->prepareOrder(flower);
	std::cout << "Grower " + grower->getName() + " returns flowers to Wholesaler " + getName() + "." << std::endl;
	return myFlower;
}
