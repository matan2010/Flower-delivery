#pragma once
#include <string>
#include <vector>
#include <iostream>


class Florist;
class FlowersBouquet;

class Person
{
private:
	std::string name;
public:
	void orderFlowers(Florist*, Person* , std::vector<std::string>);
	void acceptFlowers(FlowersBouquet*);
	Person(std::string);
	std::string getName();
};

