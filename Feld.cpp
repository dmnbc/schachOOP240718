#include "Feld.h"

int Feld::lfdFeldNr = 0;

Feld::Feld()
{
	cout << __FILE__ << " " << __LINE__ << " Feld() Nr: "<< ++Feld::lfdFeldNr << "\n";
}
