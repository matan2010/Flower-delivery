#include "FlowerArranger.h"

FlowerArranger::FlowerArranger(std::string name):Person(name)
{
}

void FlowerArranger::arrangeFlowers(FlowersBouquet* flower)
{
	std::cout << "Flower Arranger " + getName() + " arranges flowers." << std::endl;
	flower->arrange();
}
