#include "Bauer.h"

Bauer::Bauer()
{
	std::cout << "Bauer() wird genutzt\n";
}

Bauer::Bauer(bool farbe)
{
	hell = farbe; 
	std::cout<< (hell?"hell":"dunkel")<<"Bauer() wird genutzt\n";
}
