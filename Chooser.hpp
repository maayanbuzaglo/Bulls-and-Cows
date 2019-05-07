#pragma once
#include <iostream>
using std::string;

namespace bullpgia
{
    /*
    This class represents a chooser,
    he needs to choose a code number with 1/2/3/4 digits for the game.
    */
    class Chooser
    {
        public:

        /*
        This function chooses a number with 1/2/3/4 digits for the game.
        */
        virtual string choose(uint length)
        {
            return "";
        }
    };
}