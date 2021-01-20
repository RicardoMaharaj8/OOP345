#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <iomanip>

using namespace std;

namespace sdds
{
    void trim(string &);

    struct Song
    {
        string artist, title, album, price, year, mins, secs;
    };

    class SongCollection
    {
        vector<Song> songs;

    public:
        SongCollection(string);

        void display(ostream &) const;
    };

    ostream &operator<<(ostream &, const Song &);
}
