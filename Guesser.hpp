#pragma once
#include <string>
#include <iostream>
using namespace std;
using std::string;

namespace bullpgia
{
    class Guesser
    {
    public:
        string guessCode;
        uint length;

        virtual string guess() = 0;
        virtual void startNewGame(uint length)
        {
            this->length = length;
        };
        virtual void learn(string replay){};
    };

}
