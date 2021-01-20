#pragma once

#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>

using namespace std;

#define MAX_RECS 7

namespace sdds
{
    class TimedEvents
    {
    public:
        int te_cur_recs;
        chrono::steady_clock::time_point te_start_time;
        chrono::steady_clock::time_point te_end_time;
        struct
        {
            const char *te_name;
            const char *te_time_unit;
            chrono::steady_clock::duration te_duration;
        } recs[MAX_RECS];

        TimedEvents();

        void startClock();

        void stopClock();

        void recordEvent(const char *name);

        friend ostream &operator<<(ostream &os, const TimedEvents &te);
    };
}
