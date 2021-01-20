#pragma once

#include "Utilities.h"

class Station
{
    unsigned int m_id;
    string m_name;
    string m_desc;
    unsigned int m_serial;
    unsigned int m_stock;
    inline static unsigned int m_widthField{0};
    inline static unsigned int id_generator{0};

public:
    Station(const string &);

    const string &getItemName() const;

    unsigned int getNextSerialNumber();

    unsigned int getQuantity() const;

    void updateQuantity();

    void display(ostream &, bool) const;
};
