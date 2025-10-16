#include "BoatProduct.h"
#include "iostream"

using namespace std;

class BoatProduct : public Product {
public:
	void DoStuff() override {
		cout << "Pouin pouin le bato";
	}
};