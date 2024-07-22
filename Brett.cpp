#include "Brett.h"

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
			std::cout << key << " :";
			spielstand[key] = Feld();

		}
	}


}
