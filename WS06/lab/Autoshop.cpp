#include "Autoshop.h"

namespace sdds
{

    Autoshop &Autoshop::operator+=(Vehicle *v_in)
    {
        m_vehicles.push_back(v_in);
        return *this;
    }

    void Autoshop::display(ostream &os) const
    {
        os << "--------------------------------\n";
        os << "| Cars in the autoshop!        |\n";
        os << "--------------------------------\n";
        for (auto m_vehicle : m_vehicles)
        {
            m_vehicle->display(os);
        }
        os << "--------------------------------\n";
    }
}
