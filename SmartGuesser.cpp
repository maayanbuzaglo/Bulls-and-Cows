#include "SmartGuesser.hpp"

std::string bullpgia::SmartGuesser::guess()
{
	if(bullPrev == bull) //If the new code is not better then the previous code:
	{
		if(bull < 0) //If there is no bulls at all: add 1 to the code digit.
	    {
			this->guessCode = addOne(guessCode, index);
	    }
		else if(bull > 0)
		{
			this->guessCode[index] += 1;
		}
	}

	else if(bullPrev < bull)
	{
		this->guessCode[index] -= 1;
		index++;
		this->guessCode = addOne(guessCode, index);
	}

	else
	{
		index++;
		this->guessCode = addOne(guessCode, index);
	}
	return guessCode;
}

// string bullpgia::addOne(string s, int ind)
// {
// 	if(s[ind] == '9') s[ind] = '0';
// 	else s[ind] += 1;
// 	return s;
// }
