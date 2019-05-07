#include "DummyGuessers.hpp"
#include <stdlib.h>

/*
This class represents a random guesser,
he guesses random numbers for the guess code,
with no clever move.
*/
std::string RandomGuesser::guess()
{
	std::string r = "";
	for (uint i = 0; i < this->length; ++i) {
		char c = '0' + (rand() % 10); //For 1 digit number.
		r += c; //Adds it yo the code.
	}
	return r;
}
