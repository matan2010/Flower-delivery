#include "Person.h"
#include "Florist.h"

Person::Person(std::string name) : name(name)
{
}
void Person::orderFlowers(Florist* flor, Person* per, std::vector<std::string> flowers)
{
	std::cout << getName() + " orders flowers to " + per->getName() + " from Florist " + flor->getName() + ":";
	for (int i = 0; i < flowers.size() ;i++) {
		if(i != flowers.size()-1)
			std::cout << " "+flowers[i] + ",";
		else
			std::cout << " " + flowers[i] + ".\n";
	}
	
}

void Person::acceptFlowers(FlowersBouquet* flowers)
{
	std::vector<std::string> myFlowers = flowers->getBouquet();
	std::cout << getName() + " accepts the flowers:";
	for (int i = 0; i < myFlowers.size();i++) {
		if (i != myFlowers.size() - 1)
			std::cout << " " + myFlowers[i] + ",";
		else
			std::cout << " " + myFlowers[i] + ".\n";
	}
}


std::string Person::getName()
{
	return name;
}
