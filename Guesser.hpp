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

        virtual string guess() = 0;
        virtual void startNewGame(uint length)
        {
            this->length = length;
        };
        virtual void learn(string replay)
        {
            
        };
        std::string addOne(string s, int ind);
    };

}
