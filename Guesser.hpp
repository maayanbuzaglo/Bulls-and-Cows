#pragma once
#include <string>
#include <iostream>
using std::string;

namespace bullpgia
{
    class Guesser
    {
    public:
        string guessCode;
        uint length;

        Guesser(string);
        Guesser();
        virtual string guess();
        virtual void startNewGame(uint length);
        virtual void learn(string replay);
    };
  
}
