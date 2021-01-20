#pragma once

#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>
#include <string>
#include <fstream>

using namespace std;

namespace sdds
{
    class RecordSet
    {
    public:
        string *rs_strings;
        int rs_string_count;

        RecordSet();

        ~RecordSet();

        RecordSet(char *given_str);

        RecordSet(const RecordSet &given_rs);

        RecordSet &operator=(const RecordSet &given_rs);

        size_t size();

        string getRecord(int given_t);
    };
}
