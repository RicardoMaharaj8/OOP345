#pragma once

#include <vector>
#include <deque>

#include "CustomerOrder.h"
#include "Station.h"

class Workstation : public Station
{
    deque<CustomerOrder> m_orders;
    Workstation *m_pNextStation = nullptr;

public:
    Workstation(const string &);

    // no copy or move allowed
    Workstation(Workstation &) = delete;

    Workstation &operator=(Workstation &) = delete;

    Workstation(Workstation &&) = delete;

    Workstation &operator=(Workstation &&) = delete;
    //

    void runProcess(ostream &);

    bool moveOrder();

    void setNextStation(Station &);

    const Workstation *getNextStation() const;

    bool getIfCompleted(CustomerOrder &);

    void display(ostream &);

    Workstation &operator+=(CustomerOrder &&);
};
