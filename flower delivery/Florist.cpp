#include "Florist.h"

Florist::Florist(std::string name,Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson): Person(name), wholesaler(wholesaler), flowerArranger(flowerArranger), deliveryPerson(deliveryPerson)
{
}

void Florist::acceptOrder(Person* name, std::vector<std::string> flower)
{
	std::cout << "Florist " + getName() + " forwards request to Wholesaler " + wholesaler->getName()+"."<<std::endl;
	FlowersBouquet* myFlower = wholesaler->acceptOrder(flower);
	std::cout << "Wholesaler " + wholesaler->getName() + " returns flowers to Florist " + getName() + "." <<std::endl;
	std::cout << "Florist " + getName() + " request flowers arrangement from Flower Arranger " + flowerArranger->getName() + "." <<std::endl;
	flowerArranger->arrangeFlowers(myFlower);
	std::cout << "Flower Arranger " + flowerArranger->getName() + " returns arranged flowers to Florist " + getName() + "." << std::endl;
	std::cout << "Florist " + getName() + " forwards flowers to Delivery " + deliveryPerson->getName() + "." << std::endl;
	deliveryPerson->deliver(name, myFlower);
	delete myFlower;
}


