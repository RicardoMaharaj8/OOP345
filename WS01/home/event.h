#pragma once

#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

extern size_t g_sysClock;

namespace sdds
{
    class Event
    {
    private:
        char *desc;
        size_t seconds;

    public:
        Event();

        ~Event();

        void display();

        void setDescription(char arr_in[]);
    };
}
