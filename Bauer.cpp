#include "Bauer.h"

Bauer::Bauer()
{
	std::cout << "Bauer() wird genutzt\n";
}

Bauer::Bauer(bool farbe)
{
	hell = farbe; 
	typ = hell ? 'b' : 'B';
	std::cout<< (hell?"hell":"dunkel")<<"Bauer "<<typ<<" wird genutzt\n";
	
}
