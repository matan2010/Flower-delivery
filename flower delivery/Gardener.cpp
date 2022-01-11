#include "Gardener.h"

Gardener::Gardener(std::string name):Person(name)
{
}

FlowersBouquet* Gardener::prepareBouquet(std::vector<std::string> flower)
{
	std::cout << "Gardener " + getName() + " prepares flowers." << std::endl;
	FlowersBouquet* myFlower = new FlowersBouquet(flower, false);
	return myFlower;
}
