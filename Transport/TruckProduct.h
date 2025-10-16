#pragma once
#include "Product.h"

class TruckProduct : public Product {
	// Hérité via Product
	void DoStuff() override;
};
