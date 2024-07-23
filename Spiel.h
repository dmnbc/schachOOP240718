#pragma once
#include <array>
#include <string>
#include "Brett.h"

using namespace std; 

class Spiel
{
	// member
	//attribute
	int id;
	int zugNummer;
	array<string, 2> spieler;
	Brett b;

	//methoden
public:
	Spiel();       // ctor 
	Brett get_b(); 

};

