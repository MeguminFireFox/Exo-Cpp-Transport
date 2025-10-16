#pragma once
#include "Product.h"

class Factory
{
public:
	virtual Product* CreateProduct() = 0;
};