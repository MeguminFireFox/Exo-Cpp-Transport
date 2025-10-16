#include <iostream>
#include <string>
#include "Product.cpp"

int Terrain{ 0 };
std::string ItiniraireA{ "" };
std::string ItiniraireB{ "" };

//Fonction qui récupére le produit venant des usines,
//qui ensuite demande au joueur de donner les itinéraires de départ et de sortie.

class Player 
{
public:
	//La fonction.

};



int main()
{
	std::cout << "Choisissez le terrain que vous voulez : \nSur Terre = 1 \nSur L'eau = 2";
	Terrain = int std::cin;
	if ((Terrain != 0) || (Terrain != 1))
	{
		std::cout << "Ca ne fait pas partie des terrains";
		std::cin.clear();
		std::cin.ignore();
	}
}