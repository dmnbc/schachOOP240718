// SchachInOOP01.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <array>
#include <string>

#include "Spiel.h"
#include "Brett.h"



int main()
{
    setlocale(LC_ALL, "de_DE.UTF-8");
    Spiel s;  // OS meldet die Startadresse eines Objektes  s am der Stelle 0x12345678
    std::cout << "Spiel instanziert"; 
    // Anzeige des Spiels in der Grundstellung // Aufruf der Methode aus Brett
    s.get_b().anzeigen();

   
}

