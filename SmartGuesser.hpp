#pragma once
#include <iostream>
#include "Guesser.hpp"
using std::string;

namespace bullpgia
{
    class SmartGuesser : public bullpgia :: Guesser
    {
    public:
        string smartGuessCode;
        uint length;

        string Guesser(string);
        string Guesser();
    };
  
}