#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <exception>

using namespace std;

namespace sdds
{
    class SpellChecker
    {
        string sc_bad[5];
        string sc_good[5];

    public:
        SpellChecker();

        SpellChecker(const char *);

        void operator()(string &);
    };
}
