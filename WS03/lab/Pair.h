#pragma once

#include <iostream>

namespace sdds
{
    template <typename K, typename V>
    class Pair
    {
        K p_key;
        V p_value;

    public:
        Pair()
        {
            p_key = {};
            p_value = {};
        }

        Pair(const K &k, const V &v)
        {
            p_key = k;
            p_value = v;
        }

        const K &key() const
        {
            return p_key;
        }

        const V &value() const
        {
            return p_value;
        }

        void display(std::ostream &os) const
        {
            os << p_key << " : " << p_value << "\n";
        }
    };

    template <typename K, typename V>
    std::ostream &operator<<(std::ostream &os, const Pair<K, V> &p)
    {
        p.display(os);
        return os;
    }
}
