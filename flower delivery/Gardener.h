#pragma once
#include "Person.h"
#include "FlowersBouquet.h"
class Gardener:public Person
{
public:
	Gardener(std::string);
	FlowersBouquet* prepareBouquet(std::vector < std::string >);
};

