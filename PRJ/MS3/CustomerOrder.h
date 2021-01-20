#pragma once

#include <iostream>
#include <utility>
#include <vector>

#include "Station.h"
#include "Utilities.h"

using namespace std;

struct Item
{
    string m_itemName;
    size_t m_serialNumber = 0;
    bool m_isFilled = false;

    Item(const string &src) : m_itemName(src){};
};

class CustomerOrder
{
    string m_name = "";
    string m_product = "";
    size_t m_cntItem = 0;
    vector<Item> m_lstItem;
    inline static size_t m_widthField{0};

public:
    CustomerOrder(){};

    CustomerOrder(string &);

    CustomerOrder(CustomerOrder &);

    CustomerOrder &operator=(CustomerOrder &) = delete;

    CustomerOrder(CustomerOrder &&) noexcept;

    CustomerOrder &operator=(CustomerOrder &&) noexcept;

    bool isOrderFilled() const;

    bool isItemFilled(const string &) const;

    void fillItem(Station &, ostream &);

    void display(ostream &) const;
};
