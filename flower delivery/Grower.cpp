#include "Grower.h"

Grower::Grower(std::string name, Gardener* gardener):Person(name), gardener(gardener)
{
}

FlowersBouquet* Grower::prepareOrder(std::vector<std::string> flower)
{
	std::cout << "Grower " + getName() + " forwards the request to Gardener " + gardener->getName() + "." << std::endl;
	FlowersBouquet* myFlower = gardener->prepareBouquet(flower);
	std::cout << "Gardener " + gardener->getName() + " returns flowers to Grower " + getName() + "." << std::endl;
	return myFlower;
}
