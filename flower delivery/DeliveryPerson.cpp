#include "DeliveryPerson.h"

DeliveryPerson::DeliveryPerson(std::string name):Person(name)
{
}

void DeliveryPerson::deliver(Person* name, FlowersBouquet* flower)
{
	std::cout << "Delivery Person " + getName() + " delivers flowers " + name->getName() + "." << std::endl;
	name->acceptFlowers(flower);
}
