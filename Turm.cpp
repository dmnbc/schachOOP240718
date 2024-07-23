#include "Turm.h"

Turm::Turm()
{
	std::cout << "Turm " << typ << " wird genutzt\n";
}
Turm::Turm(bool farbe)
{
	hell = farbe;
	typ = hell ? 't' : 'T';
	std::cout << (hell ? "hell" : "dunkel") << "Turm " << typ << " wird genutzt\n";
}