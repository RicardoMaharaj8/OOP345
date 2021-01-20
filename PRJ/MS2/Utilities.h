#pragma once

#include <iostream>
#include <iomanip>

using namespace std;

class Utilities
{
    unsigned int m_widthField = 1;
    inline static char m_delimiter{','};

public:
    void setFieldWidth(unsigned int);

    unsigned int getFieldWidth() const;

    string extractToken(const string &);

    static void setDelimiter(char);

    static char getDelimiter();
};
