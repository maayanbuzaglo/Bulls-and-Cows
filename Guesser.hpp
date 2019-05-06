#pragma once
#include <iostream>
using std::string;

namespace bullpgia
{
    class Guesser
    {
    public:
        string guessCode;
        uint length;
        int countBull;
        int countPgia;

        virtual string guess() = 0;
        virtual void startNewGame(uint length)
        {
            this->length = length;
        };
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
