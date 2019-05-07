#include "SmartGuesser.hpp"

/*
This function guesses the code in smart way.
It sees the number of bulls and finds where it is by changing every number
and checks again by smart moves.
*/
std::string bullpgia::SmartGuesser::guess()
{
	counter++; //Counts the times this function gets called.
	if (this->length == 1) //If the code size is 1.
	{
		if (counter == 1)
		{
			guessCode = "1"; //The first guess code is 1.
			return guessCode;
		}
	    if (counter == 2)
	    {
			bullPrev = countBull;
			guessCode = "2"; //The second guess code is 2.
			return guessCode;
		}
    }

    if (this->length == 2) //If the code size is 2.
	{
		if (counter == 1)
		{
			guessCode = "11"; //The first guess code is 11.
			return guessCode;
		}
		if (counter == 2)
	    {
			bullPrev = countBull;
			guessCode = "21"; //The second guess code is 21.
			return guessCode;
	    }
    }

    if (this->length == 3) //If the code size is 3.
	{
		if (counter == 1)
	    {
			guessCode = "112"; //The first guess code is 112.
			return guessCode;
		}
	    if (counter == 2)
	    {
			bullPrev = countBull;
			guessCode = "212"; //The second guess code is 212.
			return guessCode;
	    }
    }

    if(this->length == 4) //If the code size is 4.
    {
		if (counter == 1)
	    {
			guessCode = "1122"; //The first guess code is 1122.
			return guessCode;
		}
		if (counter == 2)
		{
			bullPrev = countBull;
			guessCode = "2122"; //The second guess code is 2122.
			return guessCode;
		}
    }

	//If nothing change from the previous code:
	if (countBull == bullPrev) //If the previous bull number is equal to the now bull number.
	{
		this->guessCode = addOne(guessCode, index); //Adds one to this digit.
		return guessCode;
	}

	//If it gots worst:
	if (countBull < bullPrev) //If the previous bull number is bigger to the now bull number.
	{
		this->guessCode = subOne(guessCode, index); //Substracts one from the this digit.
		index++;
		this->guessCode = addOne(guessCode, index); //Adds one to the next digit.
		return guessCode;
	}

	//If it gots better:
	else if (countBull > bullPrev) //If the previous bull number is smaller to the now bull number.
	{
		index++;
		this->guessCode = addOne(guessCode, index); //Adds one to the next digit.
		bullPrev = countBull; //Inits the previous bull.
		return guessCode;
	}
	return "";
}

/*
This function adds one to the digit index in the code.
*/
string bullpgia::SmartGuesser::addOne(string s, int ind)
{
	if(s[ind] == '9') s[ind] = '0'; //If the digit is 9 replace it to 0.
	else s[ind] += 1;
	return s;
}

/*
This function substracts 1 fron the digit index in the code.
*/
string bullpgia::SmartGuesser::subOne(string s, int ind)
{
	if(s[ind] == '0') s[ind] = '9'; //If the digit is 0 replace it to 9.
	else s[ind] -= 1;
	return s;
}





