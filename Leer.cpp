#include "Leer.h"

Leer::Leer()
{
	std::cout << "Leer " << typ << " wird genutzt\n";
}
Leer::Leer(bool farbe)
{
	hell = farbe;
	typ = hell ? ' ' : ' ';
	// std::cout << (hell ? "hell" : "dunkel") << "Leer " << typ << " wird genutzt\n";
}