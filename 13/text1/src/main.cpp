#include <iostream>
#include"tabtenn0.h"

using namespace std;

int main(int argc, char** argv)
{
    TabtennisPlayer player1("Chuck", "Blizzard", true);
    TabtennisPlayer player2("Tara", "Boomdea", false);
    player1.Name();
    if(player1.HasTable())
        cout<<": has a table.\n";
    else
        cout<<": hasn't a table.\n";
    player2.Name();
    if(player2.HasTable())
        cout<<": has a table.\n";
    else
        cout<<": hasn't a table\n";
    return 0;
}
