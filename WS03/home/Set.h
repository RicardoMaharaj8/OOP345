#pragma once

namespace sdds
{
    template <typename T, unsigned int N>
    class Set
    {
    public:
        T arr[N];
        size_t count;
        T _arr;

        size_t size() const
        {
            return count;
        }

        const T &operator[](size_t pos) const
        {
            if (pos < N)
            {
                return arr[pos];
            }
            else
            {
                return _arr;
            }
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
