#ifndef TABTENN0_H_
#define TABTENN0_H_
#include<string>
using std::string;
class TabtennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TabtennisPlayer(const string & fn = "none",
                const string & ln = "none", bool ht = false);
    void Name() const;
    bool HasTable() const {return hasTable;}
    void ResetTable(bool v) {hasTable = v;}
};
#endif