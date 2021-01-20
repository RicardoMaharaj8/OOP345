#pragma once

#include "Vehicle.h"
#include <cstring>
#include <exception>
#include <iomanip>
#include <vector>

using namespace std;

namespace sdds
{

    string &trim(string &);

    class Car : public Vehicle
    {
        string cr_make;
        string cr_cond;
        double cr_topSpd;

    public:
        Car();

        Car(istream &);

        string condition() const;

        double topSpeed() const;

        void display(ostream &) const;
    };
}
