#pragma once

#include <iostream>
#include <iomanip>

using namespace std;

class Utilities
{
    size_t m_widthField = 1;
    inline static char m_delimiter{','};

public:
    void setFieldWidth(size_t);

    size_t getFieldWidth() const;

    string extractToken(const string &);

    string extractToken(const string &str_in, size_t &next, bool &more);

    static void setDelimiter(char);

    static char getDelimiter();
};
