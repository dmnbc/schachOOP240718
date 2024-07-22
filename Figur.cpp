#include "Figur.h"
#include "Bauer.h"

Figur::Figur()
{
	//cout << __FILE__ << " " << __LINE__ << " Figur()" << "\n";
}

Figur::Figur(std::string position)
{
	cout << __FILE__ << " " << __LINE__ << " Figur auf dem Feld" << position <<"\n";
	// Grundstellung aus position errechnen
	switch (position[1])   // a1       a index 0 ist spalte / 1 index 1 ist zeile 
	{
	case '1':  // weiße Offiziere
		break;
	
	case '8':  // schwarze Offiziere
		break;
	case '7':  // schwarze Bauern
	case '2':  // weiße Bauern
			Bauer(position[1]%2==0);
		break;
	default:
		// keine Figur Feld bleibt leer
		;

	}
}
