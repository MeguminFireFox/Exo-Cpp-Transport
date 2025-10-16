#include "Factory.h"
#pragma once

#include <iostream>
#include "TruckFactory.h"
#include "TruckProduct.cpp"

class TruckFactory : public Factory
{
public:
	Product* CreateProduct() override;
};