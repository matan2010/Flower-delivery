#pragma once
#include "Person.h"
#include "Gardener.h"
#include "FlowersBouquet.h"

class Grower:public Person
{
private:
	Gardener* gardener;
public:
	Grower(std::string, Gardener*);
	FlowersBouquet* prepareOrder(std::vector < std::string >);


};

