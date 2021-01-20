#pragma once

#include "Reservation.h"

namespace sdds
{
    class ConfirmationSender
    {
        Reservation **cs_res_arr;
        int cs_count;

    public:
        int size() const;

        ConfirmationSender();

        ~ConfirmationSender();

        ConfirmationSender(ConfirmationSender &);

        ConfirmationSender(ConfirmationSender &&);

        ConfirmationSender &operator+=(Reservation &);

        ConfirmationSender &operator-=(Reservation &);

        friend ostream &operator<<(ostream &, ConfirmationSender &);
    };
}
