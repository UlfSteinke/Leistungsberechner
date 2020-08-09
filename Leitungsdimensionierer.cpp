
#include <iostream>
#include "Leitungsdimensionierer.h"

int main()
{
	//Initialisierung der Variablen mit std;
	//Benötigte Integer, ohne doppelte Verwendung. :);
	
	std::double_t leistung;
	std::double_t erwartetespannung;
	std::double_t erwarteterstrom;
	std::double_t temperatur;
	std::double_t anzahlleitungen;
	std::double_t wirkungsgrad;
	std::double_t sicherung;

	//Benötigte Strings (Zeichenfolgen). :)

	std::string willkommen("Willkommen beim Leitungsdimensionierer. :)");
	std::string gummi("Gummi oder PVC?");
	std::string	test;


	//Programmstart
	std::cout << willkommen << std::endl;



	//In diesem Abschnitt wird erfragt, wie hoch der fließende Strom ist.;
	std::cout << "Wie hoch ist die Betriebsspannung? (in Volt): ";
	std::cin >> erwartetespannung; 

	std::cout << "Wie hoch ist die Leistung des Verbauchers? (in Watt) :";
	std::cin >> leistung;

	std::cout << "Wie hoch ist der Wirkungsgrad? (Syntax: 95% -> 0,95) :";
	std::cin >> wirkungsgrad;
	std::cout << std::endl;

	erwarteterstrom = leistung / (erwartetespannung * wirkungsgrad);
	std::cout <<	"Der erwartete Strom betraegt: "	<< erwarteterstrom	<<"A"	<<	std::endl;

	std::cout << "Wie hoch ist der Nennstrom der Absicherung? (in Ampere): ";
	std::cin >> sicherung;

	if (erwarteterstrom <= sicherung)
	{
		std::cout << "Der Stromkreis ist ausreichend Abgesichert, bitte beruecksichtigen Sie den Anlaufstrom.";
	}
	else
	{
		std::cout << "Der Stromkreis ist NICHT ausreichend Absichert! Bitte Verwenden Sie eine andere Sicherung."; 
	}
}