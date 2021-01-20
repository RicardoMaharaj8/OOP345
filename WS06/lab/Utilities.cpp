#include "Utilities.h"

namespace sdds
{
    Vehicle *createInstance(istream &is)
    {
        string str;
        is >> str;
        if (str[0] == 'c' || str[0] == 'C')
        {
            Car *c = nullptr;
            c = new Car(is);
            return c;
        }
        else
        {
            return nullptr;
        }
    }
}
