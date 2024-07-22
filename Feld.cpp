#include "Feld.h"

int Feld::lfdFeldNr = 0;

Feld::Feld()
{
	//std::cout << "Feld wird erstellt\n";
}

Feld::Feld(std::string key)
{
	// std::cout << "Feld " << key << " wird erstellt\n";
	// mit der Info um welches Feld es sicht handelt, kann man die Attribute des Feldes bestimmen
	bezeichnung = key;
	hell = ! ((key[0]+key[1]) % 2);
	figur = Figur(key); 
}
