#pragma once

#include <cstring>

namespace sdds
{
    template <typename T, unsigned int N>
    class Set
    {
        T arr[N];
        size_t count;

    public:
        Set()
        {
            count = 0;
        }

        size_t size() const
        {
            return count;
        }

        const T &operator[](size_t pos) const
        {
            return arr[pos];
        }

        void operator+=(const T &i)
        {
            if (count < N)
            {
                arr[count] = i;
                count++;
            }
        }
    };
}
