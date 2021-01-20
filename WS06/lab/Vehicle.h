#pragma once

#include <iostream>
#include <string>

namespace sdds
{
    class Vehicle
    {
    public:
        virtual double topSpeed() const = 0;

        virtual void display(std::ostream &) const = 0;

        virtual std::string condition() const = 0;

        virtual ~Vehicle(){};
    };
}
