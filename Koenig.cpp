#include "Koenig.h"

Koenig::Koenig()
{
	std::cout << "Koenig " << typ << " wird genutzt\n";
}
Koenig::Koenig(bool farbe)
{
	hell = farbe;
	typ = hell ? 'k' : 'K';
	std::cout << (hell ? "hell" : "dunkel") << "Koenig " << typ << " wird genutzt\n";
}