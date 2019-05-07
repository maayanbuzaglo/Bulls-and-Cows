#include "calculate.hpp"
#include <string>
#include <algorithm>
using namespace std;

/*
This funcion represents a calculate which compute the number of pgia and the number of bull in our guess.
*/
string bullpgia::calculateBullAndPgia(string choice, string guess)
{
    string tempChoice = choice; //Temp for the choice.
    string tempGuess = guess; //Temp for the guess.
    int size = choice.length(); //The size of the choice.
    int bull = 0, pgia = 0; //Inits bull and pgia.
    int i, j, index = 0;
    bool goodCode = true; //Checks if the code is fine.
    bool apear = false; //Checks if the temp number apears in the guess.
    int codeC = 0;
    int codeG = 0;

    for (i = 0; i < size && goodCode && i < guess.length(); i++) //Checks if the code is made only by numbers.
    {
        goodCode = false;
        string tempC = "";
        string tempG = "";
        tempC.append(1, choice[i]); //Gets the temp choice.
        tempG.append(1, guess[i]); //Gets the temp guess.
            codeC = stoi(tempC); //Changes the choice from string to int.
            codeG = stoi(tempG); //Changes the guess from string to int.
            if((codeC >= 0) && (codeG >= 0)) //Checks if the choise and the guess is an integer.
            {
                goodCode = true;
            }
    }

    if(!goodCode) //If the code is not an integer.
    {
        __throw_runtime_error("The code is illegal.");
    }

    //Counts the bull.
    for (i = 0; i < size; i++)
    {
        char temp = tempChoice[i];
        if (temp == tempGuess[i]) //Checks if there is a bull.
        {
            bull++; 
            tempChoice[i] = 'x'; //So it will not use this number again.
            tempGuess[i] = 'x'; //So it will not use this number again.
        }
    }

    //Counts the pgia.
    for (i = 0; i < size; i++)
    {
        index = 0;
        apear = false;
        char temp = tempChoice[i];
        if (temp != 'x') //If we have not check this number.
        {
            for (j = 0; j < size && !apear; j++)
            {
                if (temp == tempGuess[j])
                {
                    pgia++;
                    apear = true;
                    index = j;
                }
            }
            if (!apear) //If the temp number does not appear in the guess:
            {
                replace(tempChoice.begin(), tempChoice.end(), temp, 'x');
            }
            else
            {
                tempChoice[i] = 'x'; //Change all this number in the choice to 'x', so we will not check it again.
                tempGuess[index] = 'x';
            }
        }
    }
    string ans = to_string(bull) + "," + to_string(pgia);
    return ans;
}