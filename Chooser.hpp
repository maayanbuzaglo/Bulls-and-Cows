#pragma once
#include <string>
#include <iostream>
using std::string;

namespace bullpgia
{
    class Chooser
    {
    public:
        string chose;
        uint length;

        Chooser(string);
        Chooser();
        virtual string choose(uint length);
    };
  
}