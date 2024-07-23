#include "Brett.h"
#include "consolenfarbe.h"
Brett::Brett()
{
	
	cout << __FILE__ << " " << __LINE__ << " Brett()" << "\n";
	// Erstellen der 64 Felder für den spielstand
	// Jedes Element der map braucht einen key und ein passendes value
	// keys sind a8, b8, c8 usw,     
	for (char zeile = '8'; zeile >= '1'; zeile--)
	{
		for (char spalte = 'a'; spalte <= 'h'; spalte++)
		
		{
			std::string key;
			//std::cout << spalte << zeile; 
			key += spalte;
			key += zeile;
			//std::cout << key << " :";
			spielstand[key] = Feld(key); // ctor mit parameter

		}
	}
}

void Brett::anzeigen()
{
	farbe::concolinit();
	system("CLS");
	std::cout << "Spielstand anzeigen\n"; // map<string key, Feld value> spielstand
	// für alle Felder
	for (char zeile = '8'; zeile >= '1'; zeile--)
	{
		for (char spalte = 'a'; spalte <= 'h'; spalte++)

		{
			// zeige das Feld in seiner Farbe
			farbe::setbackcolor((zeile+spalte)%2 ? farbe::concol::grey : farbe::concol::white);
			//zeige die Figur auf dem Feld
			std::string key;
			//std::cout << spalte << zeile; 
			key += spalte;
			key += zeile;
			//std::cout << key << " :";		
			// 
			Figur f = spielstand[key].get_figur();
			char t = f.typ;
			std::cout << spielstand[key].get_figur().typ;
			//system("Pause");

		   // wenn eine Figur darauf steht

			 // zeige Figur in ihrer Farbe
		}
		std::cout << "\n";
	}
}
