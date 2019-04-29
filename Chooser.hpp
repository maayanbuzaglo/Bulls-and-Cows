#pragma once
#include <iostream>
using std::string;

namespace bullpgia
{
    class Chooser
    {
    public:
        virtual string choose(uint length)
        {
            return "";
        }
    };
}