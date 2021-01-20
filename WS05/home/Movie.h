#pragma once

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

namespace sdds
{
    class Movie
    {
        string mov_title;
        int mov_year;
        string mov_desc;

    public:
        Movie();

        const string &title() const;

        Movie(const string &);

        template <typename T>
        void fixSpelling(T SP)
        {
            SP(mov_title);
            SP(mov_desc);
        }

        friend ostream &operator<<(ostream &, const Movie &);
    };
}
