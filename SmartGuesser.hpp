#pragma once
#include "Guesser.hpp"

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
		string guess();
	};
}
