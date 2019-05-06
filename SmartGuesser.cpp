#include "SmartGuesser.hpp"

std::string bullpgia::SmartGuesser::guess()
{
	counter++;
if (counter == 1)
{
	return guessCode;
}
if (counter == 2)
{
	
	if (countBull == 1)
	{
		index++;
		this->guessCode = addOne(guessCode, index);
		bullPrev = countBull;
	}
	else
	{
		this->guessCode = addOne(guessCode, index);
		bullPrev = countBull;
	}
	return guessCode;
}

if (bullPrev < countBull)
{
	index++;
	this->guessCode = addOne(guessCode, index);
	bullPrev = countBull;
	return guessCode;
}
if (bullPrev == countBull)
{
	this->guessCode = addOne(guessCode, index);
	return guessCode;
}




	// if (counter == 1)
	// {
	// 	guessCode = "1122";
	// 		cout << "guess: " << guessCode << " no: " << counter << " prev: " << bullPrev << " bull: " << countBull << "\n" << endl;

	// 	return guessCode;
	// }
	// if (counter == 2)
	// {
	// 	bullPrev = countBull;
	// 	guessCode = "2122";
	// 		cout << "guess: " << guessCode << " no: " << counter << " prev: " << bullPrev << " bull: " << countBull << "\n" << endl;

	// 	return guessCode;
	// }

	// cout << "guess: " << guessCode << " no: " << counter << " prev: " << bullPrev << " bull: " << countBull << "\n" << endl;


	// if (countBull == bullPrev)
	// {
	// 	this->guessCode = addOne(guessCode, index);
	// 	return guessCode;
	// }
	// if (countBull < bullPrev)
	// {
	// 	this->guessCode = redOne(guessCode, index);
	// 	index++;
	// 	this->guessCode = addOne(guessCode, index);
	// 	return guessCode;
	// }
	// else if (countBull > bullPrev)
	// {
	// 	index++;
	// 	this->guessCode = addOne(guessCode, index);
	// 	bullPrev = countBull;
	// 	return guessCode;
	// }
}

// 	if(bullPrev == bull) //If the new code is not better then the previous code:
// 	{
// 		if(bull < 0) //If there is no bulls at all: add 1 to the code digit.
// 	    {
// 			this->guessCode = addOne(guessCode, index);
// 	    }
// 		else if(bull > 0)
// 		{
// 			this->guessCode[index] += 1;
// 		}
// 	}

// 	else if(bullPrev < bull)
// 	{
// 		this->guessCode[index] -= 1;
// 		index++;
// 		this->guessCode = addOne(guessCode, index);
// 	}

// 	else
// 	{
// 		index++;
// 		this->guessCode = addOne(guessCode, index);
// 	}
// 	return guessCode;
// }

string bullpgia::SmartGuesser::addOne(string s, int ind)
{
	if(s[ind] == '*') s[ind] = '0';
	else s[ind] += 1;
	return s;
}

// string bullpgia::SmartGuesser::redOne(string s, int ind)
// {
// 	if(s[ind] == '0') s[ind] = '9';
// 	else s[ind] -= 1;
// 	return s;
// }





