#include "Springer.h"

Springer::Springer()
{
	std::cout << "Springer " << typ << " wird genutzt\n";
}
Springer::Springer(bool farbe)
{
	hell = farbe;
	typ = hell ? 's' : 'S';
	std::cout << (hell ? "hell" : "dunkel") << "Springer " << typ << " wird genutzt\n";
}