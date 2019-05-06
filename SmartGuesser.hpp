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
		private:
		string addOne(string s, int ind);
		string redOne(string s, int ind);
				
		public:

		int counter;
		int bullPrev;
		int pgia;
	    int pgiaPrev;
		int index;
		
		virtual void startNewGame(uint length) override
		{
			this->counter = 0;
			this->index = 0;
			this->bullPrev = 0;
			this->pgia = 0;
			this->pgiaPrev = 0;
			this->length = length;
			this->guessCode = "1122";
		}


		SmartGuesser()
		{

		}
		~SmartGuesser() {};
		string guess() override;
	};
}
