#pragma once
#include "Guesser.hpp"
#include "calculate.hpp"

namespace bullpgia
{
	/*
	This class represents a smart guesser.
	It inherits Guesser class.
	*/
	class SmartGuesser: public bullpgia::Guesser
	{
		private:
		/*
		This function adds 1 to the digit index in the code.
		*/
		string addOne(string s, int ind);

		/*
		This function substracts 1 fron the digit index in the code.
		*/
		string subOne(string s, int ind);
				
		public:

		int counter; //Counts the times the functon guess gets called in the game.
		int bullPrev; //The previous bull.
		int index; //The index of the digit we are in the code.
		
		/*
		This function starts a new game.
		*/
		virtual void startNewGame(uint length) override
		{
			this->counter = 0; //Inits.
			this->index = 0; //Inits.
			this->bullPrev = 0; //Inits.
			this->length = length; //Inits.
		}

		/*
		This function guesses the code in smart way.
		*/
		string guess() override;
	};
}
