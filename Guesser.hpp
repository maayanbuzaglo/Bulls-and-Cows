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
        void startNewGame(uint length);
        void learn(string guessCode);
    };
  
}