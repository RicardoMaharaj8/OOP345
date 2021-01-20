#pragma once

#include <iostream>
#include <iomanip>
#include <string>

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
        Book();

        const string title();

        const string country();

        const int year();

        double &price();

        Book(const string &);

        friend ostream &operator<<(ostream &, const Book &);
    };
}
