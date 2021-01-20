#pragma once

#include "Reservation.h"

namespace sdds
{
    class Restaurant
    {
        Reservation *rest_reserves;
        int rest_num;

    public:
        Restaurant();

        ~Restaurant();

        Restaurant(Reservation *[], int);

        Restaurant(const Restaurant &);

        Restaurant(Restaurant &&);

        int size() const;

        friend ostream &operator<<(ostream &, const Restaurant &);
    };
}
