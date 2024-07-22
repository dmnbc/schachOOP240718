#include "Feld.h"

int Feld::lfdFeldNr = 0;

Feld::Feld()
{
	string spalte = "ABCDEFGH";
	string zeile = "12345678";
	bezeichnung = std::string()+spalte[Feld::lfdFeldNr % 8]+zeile[7- (Feld::lfdFeldNr / 8) ];
	cout << __FILE__ << " " << __LINE__ << " Feld() Nr: "<< ++Feld::lfdFeldNr << " ergibt "<<bezeichnung<<"\n";
}
