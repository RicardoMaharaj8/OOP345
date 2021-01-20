#pragma once

#include "Set.h"

namespace sdds
{
    template <typename T, unsigned int N, typename K, typename V>
    class SetSummable : public Set<T, N>
    {
    public:
        V accumulate(const K &key) const
        {
            V val;
            val = (*this)[0].getInitialValue();
            for (size_t i = 0; i < this->size(); i++)
            {
                val = (*this)[i].sum(key, val);
            }
            return val;
        }
    };
}
