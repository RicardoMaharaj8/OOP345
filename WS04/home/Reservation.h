#pragma once

#include <iostream>
#include <string>

using namespace std;

namespace sdds
{
    class Reservation
    {
    protected:
        string res_id;
        string res_name;
        string res_email;
        int res_people;
        int res_day;
        int res_hour;

    public:
        Reservation();

        Reservation(const string &res);

        friend ostream &operator<<(ostream &os, Reservation &res);
    };
}
