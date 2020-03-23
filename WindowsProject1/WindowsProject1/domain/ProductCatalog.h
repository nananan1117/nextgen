#pragma once
#include "ItemId.h"
#include "ProductDescription.h"
#include <map>;
class ProductCatalog
{
private:
	std::map<ItemId, ProductDescription> Map;
	std::map<ItemId, ProductDescription> description;
};