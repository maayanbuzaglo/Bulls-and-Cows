#include "calculate.hpp"
#include <string>
#include <algorithm>
using namespace std;

string bullpgia::calculateBullAndPgia(string choice, string guess)
{
    string tempChoice = choice;
    string tempGuess = guess;
    int size = choice.size();
    int bull = 0, pgia = 0;
    int i, j, index = 0;
    bool flag = false;
    int codeC = 0;
    int codeG = 0;
    bool goodCode = true;

    if ((size == 0) || (size != guess.size())) // Check if the code is not empty or is the same size of the guess code.
    {
        __throw_runtime_error("The code is illegal");
    }

    for (i = 0; i < size && goodCode; i++) // Check if the code is made only by numbers.
    {
        goodCode = false;
        string tempC = "";
        string tempG = "";
        tempC.append(1, choice[i]);
        tempG.append(1, guess[i]);
        codeC = stoi(tempC);
        codeG = stoi(tempG);
        if ((codeC >= 0) && (codeG >= 0))
        {
            goodCode = true;
        }
    }

    if (!goodCode) // Check if the code is not empty or is the same size of the guess code.
    {
        __throw_runtime_error("The code is illegal");
    }

    // for to count the bull.
    for (i = 0; i < size; i++)
    {
        char temp = tempChoice[i];
        if (temp == tempGuess[i]) // check if the is a bull.
        {
            bull++;
            tempChoice[i] = 'x';
            tempGuess[i] = 'x';
        }


    }

    // for to count the pgia.
    for (i = 0; i < size; i++)
    {
        index = 0;
        flag = false;
        char temp = tempChoice[i];
        if (temp != 'x')
        {
            for (j = 0; j < size && !flag; j++)
            {
                if (temp == tempGuess[j])
                {
                    pgia++;
                    flag = true;
                    index = j;
                }
            }
            if (!flag) // if the temp number does not appear in the guess, change all this number in the choice to 'x'.
            {
                replace(tempChoice.begin(), tempChoice.end(), temp, 'x');
            }
            else
            {
                tempChoice[i] = 'x';
                tempGuess[index] = 'x';
            }
        }
    }
    string ans = to_string(bull) + "," + to_string(pgia);
    return ans;
}