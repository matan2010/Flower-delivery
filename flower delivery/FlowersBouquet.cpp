#include "FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(std::vector<std::string>bouquet, bool is_arranged):bouquet(bouquet), is_arranged(is_arranged)
{
}

void FlowersBouquet::arrange()
{
	is_arranged = true;
}

std::vector<std::string> FlowersBouquet::getBouquet()
{
	return bouquet;
}
