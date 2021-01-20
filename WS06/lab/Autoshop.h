#pragma once

#include <vector>

#include "Vehicle.h"

using namespace std;

namespace sdds
{
    class Autoshop
    {
        vector<Vehicle *> m_vehicles;

    public:
        Autoshop &operator+=(Vehicle *);

        void display(ostream &) const;
    };
}
