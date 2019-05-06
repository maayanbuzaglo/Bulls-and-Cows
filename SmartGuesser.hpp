#pragma once
#include "Guesser.hpp"
#include "calculate.hpp"

/**
 * ConstantGuesser is a guesser that always guesses the same string. 
 */
namespace bullpgia
{
	class SmartGuesser: public bullpgia::Guesser
	{
				
		public:
	
		int bull;
		int bullPrev;
		int pgia;
	    int pgiaPrev;
		int index;

		SmartGuesser()
		{

		}
		string guess() override;
	};
}
