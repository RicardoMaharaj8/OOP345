#include "Utilities.h"

void Utilities::setFieldWidth(unsigned int w)
{
    m_widthField = w;
}

unsigned int Utilities::getFieldWidth() const
{
    return m_widthField;
}

string Utilities::extractToken(const string &str)
{
    string re = str.substr(0, str.find(m_delimiter));
    if (m_widthField < re.length())
    {
        m_widthField = re.length();
    }
    if (getFieldWidth() < re.length())
    {
        setFieldWidth(re.length());
    }
    return re;
}

void Utilities::setDelimiter(char c)
{
    m_delimiter = c;
}

char Utilities::getDelimiter()
{
    return m_delimiter;
}
