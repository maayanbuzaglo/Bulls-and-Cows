#pragma once
#include <iostream>
using std::string;

namespace bullpgia
{
    /*
    This class represents a guesser,
    he needs to guess a code number with 1/2/3/4 digits for the game.
    */
    class Guesser
    {
    public:
        string guessCode; //The guess code.
        uint length; //The length of the guess code.
        int countBull; //Number of bull.
        int countPgia; //Number of pgia.

        /*
        This function guesses the code.
        */
        virtual string guess() {
            return "";
        };

        /*
        This function starts a new game.
        */
        virtual void startNewGame(uint length)
        {
            this->length = length;
        };

        /*
        This function learns from the calculate result.
        It take the string result and separate it to the number of bull and number of pgia.
        */
        virtual void learn(string replay)
        {
            string bull = "";
            string pgia = "";
            bull.append(1, replay[0]);
            pgia.append(1, replay[2]);
            this->countPgia = stoi(pgia); //converts the bull from string to int.
            this->countBull = stoi(bull); //converts the pgia from string to int.
        };
    };

}
