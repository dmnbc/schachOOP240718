#include "Feld.h"
#include "Bauer.h"
#include "Turm.h"
#include "Springer.h"
#include "Laeufer.h"
#include "Dame.h"
#include "Koenig.h"
#include "Leer.h"

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
	case '8':  // schwarze Offiziere
		std::cout << "Offiziere";
		switch (key[0])  //spalte
		{
		case 'a':
		case 'h': // türme
			figur = Turm(key[1] % 2 );
			break;
		case 'b':
		case 'g': // springer
			figur = Springer(key[1] % 2 );
			break;
		case 'c':
		case 'f': // laeufer
			figur = Laeufer(key[1] % 2 );
			break;
		case 'd':
			figur = Dame(key[1] % 2 );
			break;
		case 'e': // koenig
			figur = Koenig(key[1] % 2 );
			break;
		}
		break;
	case '7':  // schwarze Bauern
	case '2':  // weiße Bauern
		figur = Bauer(key[1] % 2 == 0);
		break;
	default:
		// keine Figur Feld bleibt leer
		figur = Leer(key[1] % 2 == 0);

	}
	
}

Figur Feld::get_figur()
{
	return figur;
}
