#pragma once
#include <vector>
#include <string>
#include <vector>
class FlowersBouquet
{
private:
	std::vector <std::string > bouquet;
	bool is_arranged;
public:
	FlowersBouquet(std::vector <std::string >, bool);
	void arrange();
	std::vector <std::string > getBouquet();
};

