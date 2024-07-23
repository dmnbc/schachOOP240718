#include "Dame.h"

Dame::Dame()
{
	std::cout <<  "Dame " << typ << " wird genutzt\n";
}
Dame::Dame(bool farbe)
{
	hell = farbe;
	typ = hell ? 'd' : 'D';
	std::cout << (hell ? "hell" : "dunkel") << "Dame " << typ << " wird genutzt\n";
}