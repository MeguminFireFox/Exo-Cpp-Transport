#include "TruckProduct.h"
#include "iostream"

using namespace std;

class TruckProduct : Product {
public:
	void DoStuff() override {
		cout << "Vrroum vrroum le kamion";
	}
};