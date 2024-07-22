#pragma once
#include "Figur.h"
class Feld
{
private:
	Figur figur;
	string bezeichnung; // A1 B3 D5 usw.
	static int lfdFeldNr;   // abzählen der erstellten Felder

public:
	Feld();

};

