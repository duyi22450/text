#include"tabtenn1.h"
#include<iostream>

TabtennisPlayer::TabtennisPlayer(const string & fn,
    const string &ln, bool ht):firstname(fn),
        lastname(ln), hasTable(ht){}

void TabtennisPlayer::Name() const
{
    std::cout<<lastname<<", "<<firstname;
}

RatedPlayer::RatedPlayer(unsigned int r, const string & fn,
    const string & ln, bool ht): TabtennisPlayer(fn, ln, ht)
{
    rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TabtennisPlayer & tp)
    : TabtennisPlayer(tp), rating(r) 
{}