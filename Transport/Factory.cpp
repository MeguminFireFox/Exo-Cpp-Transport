#include <iostream>
#include "Factory.h"
#include "Product.h"

class Factory
{
public:
	virtual Product* CreateProduct() = 0;
};