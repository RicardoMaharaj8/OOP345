#pragma once

#include <vector>
#include <iomanip>
#include <cstring>

#include "Vehicle.h"

using namespace std;

namespace sdds
{
    class Car : public Vehicle
    {
        string maker;
        string cnd;
        double maxSpd;

    public:
        Car();

        Car(istream &);

        string condition() const;

        double topSpeed() const;

        void display(ostream &) const;
    };
}
