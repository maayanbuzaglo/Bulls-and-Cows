#include "DummyChoosers.hpp"
#include <stdlib.h>

/*
This class represents a random chooser,
he chooses random numbers for the choose code.
*/
std::string RandomChooser::choose(uint length)
{
	std::string r = "";
	for (uint i = 0; i < length; ++i) {
		char c = '0' + (rand() % 10); //For 1 digit number.
		r += c; //Adds it yo the code.
	}
	return r;
}
