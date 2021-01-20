#include "Racecar.h"

namespace sdds
{

    Racecar::Racecar(istream &is) : Car(is)
    {
        is >> rc_booster;
    }

    void Racecar::display(ostream &os) const
    {
        Car::display(os);
        os << "*";
    }

    double Racecar::topSpeed() const
    {
        return (Car::topSpeed() * (rc_booster + 1));
    }
}
