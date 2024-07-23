#include "Laeufer.h"

Laeufer::Laeufer()
{
	std::cout << "Laeufer " << typ << " wird genutzt\n";
}
Laeufer::Laeufer(bool farbe)
{
	hell = farbe;
	typ = hell ? 'l' : 'L';
	std::cout << (hell ? "hell" : "dunkel") << "Laeufer " << typ << " wird genutzt\n";
}