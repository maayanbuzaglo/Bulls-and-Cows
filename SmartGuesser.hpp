#pragma once
#include "Guesser.hpp"
using std::string;


/**
 * ConstantGuesser is a guesser that always guesses the same string. 
 */
class SmartGuesser: public bullpgia::Guesser
{
	string myConstantString;

	public:
		SmartGuesser(string constantString)
		{
			myConstantString = constantString;
		}
		string guess() override
		{
			return myConstantString;
		}
};

/**
 * RandomGuesser is a guesser that guesses a random string.
 */
class SmartGuesser: public bullpgia::Guesser
{
	string guess() override;
};
