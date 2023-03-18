#include"tabtenn0.h"
#include<iostream>

TabtennisPlayer::TabtennisPlayer(const string & fn,
    const string &ln, bool ht):firstname(fn),
        lastname(ln), hasTable(ht){}

void TabtennisPlayer::Name() const
{
    std::cout<<lastname<<", "<<firstname;
}