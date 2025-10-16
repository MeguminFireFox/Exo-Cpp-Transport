#include <iostream>
#include "TruckFactory.h"
#include "TruckProduct.h"

Product* TruckFactory::CreateProduct()
{
	return new TruckProduct();
}
