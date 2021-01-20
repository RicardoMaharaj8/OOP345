#pragma once

#include <iostream>
#include <iomanip>
#include <string>

#include "SpellChecker.h"

using namespace std;

namespace sdds
{
    class Book
    {
        string book_author;
        string book_title;
        string book_country;
        int book_year;
        double book_price;
        string book_desc;

    public:
        template <typename T>
        void fixSpelling(T SP)
        {
            SP(book_desc);
        }

        Book();

        const string title() const;

        const string country() const;

        const int year() const;

        double &price();

        Book(const string &);

        friend ostream &operator<<(ostream &, const Book &);
    };
}
