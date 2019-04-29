#pragma once
#include <string>
#include <iostream>
#include <stdlib.h>
using std::string;

namespace bullpgia
{
    class Chooser
    {
    public:
        virtual string choose(uint length){return " ";};
    };
}