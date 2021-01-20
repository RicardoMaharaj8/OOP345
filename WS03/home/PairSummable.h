#pragma once

#include <iostream>
#include <iomanip>

#include "Pair.h"

using namespace std;

namespace sdds
{
    template <typename K, typename V>
    class PairSummable : public Pair<K, V>
    {
        static V init_val;
        static size_t min_width;

    public:
        static const V &getInitialValue()
        {
            return init_val;
        }

        PairSummable() : Pair<K, V>() {}

        PairSummable(const K &key, const V &value) : Pair<K, V>(key, value)
        {
            if (min_width < key.size())
            {
                min_width = key.size();
            }
        }

        V sum(const K &key, const V &val) const
        {
            if (this->key() == key)
            {
                return this->value() + val;
            }
            else
            {
                return val;
            }
        }

        void display(std::ostream &os) const
        {
            os << left << setw(min_width);
            Pair<K, V>::display(os);
            os << right;
        }
    };

    template <class K, class V>
    size_t PairSummable<K, V>::min_width = 0u;

    template <>
    string PairSummable<string, string>::init_val = "";

    template <>
    int PairSummable<string, int>::init_val = 0;

    template <>
    std::string PairSummable<std::string, std::string>::sum(const std::string &key, const std::string &val) const
    {
        string other;
        if (this->key() == key)
        {
            if (val == "")
            {
                other = this->value();
            }
            else
            {
                other = val + ", " + this->value();
            }
        }
        else
        {
            other = val;
        }
        return other;
    }
}