#pragma once
#include <array>
#include <map>
#include "Feld.h"

using namespace std;
class Brett
{
private:
	// array<array<Feld, 8>, 8 > spielstand; // 64 ctor Aufrufe
	map<string, Feld> spielstand;    // kein automatischer ctor Aufruf

public:
	Brett();
	void anzeigen();

};

