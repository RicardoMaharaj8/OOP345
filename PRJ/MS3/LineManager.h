#pragma once

#include "CustomerOrder.h"
#include "Workstation.h"

class LineManager
{
private:
    vector<Workstation *> m_assemblyLine;
    vector<Workstation *> m_assemblySorted;
    deque<CustomerOrder> m_toBeFilled;
    deque<CustomerOrder> m_completed;
    size_t m_cntCustomerOrder = 0;

public:
    LineManager(const string &, vector<Workstation *> &, vector<CustomerOrder> &);

    bool run(ostream &);

    void displayCompletedOrders(ostream &);

    void displayStations() const;

    void displayStationsSorted() const;
};
