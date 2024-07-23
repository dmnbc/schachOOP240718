#pragma once
#include "Figur.h"
class Feld
{
private:
	Figur figur;
	string bezeichnung; // A1 B3 D5 usw.
	static int lfdFeldNr;   // abz�hlen der erstellten Felder
	bool hell;

public:
	Feld();
	Feld(std::string);
	Figur get_figur();

};

