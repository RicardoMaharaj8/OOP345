#pragma once

#include "Car.h"

namespace sdds
{
    class Racecar : public Car
    {
        double rc_booster;

    public:
        Racecar(istream &);

        void display(ostream &) const;

        double topSpeed() const;
    };
}
