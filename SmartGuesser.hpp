#pragma once
#include "Guesser.hpp"
#include "calculate.hpp"
using std::string;

/**
 * ConstantGuesser is a guesser that always guesses the same string. 
 */
namespace bullpgia
{
class SmartGuesser: public bullpgia::Guesser
{
	string myConstantString;

	public:
	
		SmartGuesser()
		{

		}
		string guess() override;
};
}
