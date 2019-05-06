#include "SmartGuesser.hpp"

std::string bullpgia::SmartGuesser::guess()
{
	counter++;

if (this->length == 1)
{
if (counter == 1)
	{
		guessCode = "1";
		return guessCode;
	}
	if (counter == 2)
	{
		bullPrev = countBull;
		guessCode = "2";
		return guessCode;
	}
}
if (this->length == 2)
{
	if (counter == 1)
	{
		guessCode = "11";
		return guessCode;
	}
	if (counter == 2)
	{
		bullPrev = countBull;
		guessCode = "21";
		return guessCode;
	}
}

if (this->length == 3)
{
	if (counter == 1)
	{
		guessCode = "112";
		return guessCode;
	}
	if (counter == 2)
	{
		bullPrev = countBull;
		guessCode = "212";
		return guessCode;
	}
}
if(this->length == 4)
{
	if (counter == 1)
	{
		guessCode = "1122";
		return guessCode;
	}
	if (counter == 2)
	{
		bullPrev = countBull;
		guessCode = "2122";
		return guessCode;
	}
}

	if (countBull == bullPrev)
	{
		this->guessCode = addOne(guessCode, index);
		return guessCode;
	}
	if (countBull < bullPrev)
	{
		this->guessCode = redOne(guessCode, index);
		index++;
		this->guessCode = addOne(guessCode, index);
		return guessCode;
	}
	else if (countBull > bullPrev)
	{
		index++;
		this->guessCode = addOne(guessCode, index);
		bullPrev = countBull;
		return guessCode;
	}
}

string bullpgia::SmartGuesser::addOne(string s, int ind)
{
	if(s[ind] == '9') s[ind] = '0';
	else s[ind] += 1;
	return s;
}

string bullpgia::SmartGuesser::redOne(string s, int ind)
{
	if(s[ind] == '0') s[ind] = '9';
	else s[ind] -= 1;
	return s;
}





