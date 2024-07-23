#include "Feld.h"
#include "Bauer.h"

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

	switch (key[1])   // a1       a index 0 ist spalte / 1 index 1 ist zeile 
	{
	case '1':  // weiße Offiziere
		std::cout << "weiße Offiziere";
		break;

	case '8':  // schwarze Offiziere
		std::cout << "schwarze Offiziere";
		break;
	case '7':  // schwarze Bauern
	case '2':  // weiße Bauern
		figur = Bauer(key[1] % 2 == 0);
		break;
	default:
		// keine Figur Feld bleibt leer
		;

	}
	
}

Figur Feld::get_figur()
{
	return figur;
}
