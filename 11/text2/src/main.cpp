#include <iostream>
#include"mytime2.h"

using namespace std;

int main(int argc, char** argv)
{
    Time weeding(4, 35);
    Time waxing(2, 47);
    Time total;
    Time diff;
    Time adjusted;

    cout << "weeding time = ";
    weeding.Show();
    cout<<endl;

    cout<<"waxing time = ";
    waxing.Show();
    cout<<endl;

    cout<<"total work time = ";
    total = weeding + waxing;
    total.Show();
    cout<<endl;

    diff = weeding - waxing;
    cout<<"weeding time - waxing time = ";
    diff.Show();
    cout<<endl;

    adjusted = total * 1.5;
    cout<<"adjusetd work time = ";
    adjusted.Show();
    cout<<endl;
    
    return 0;
}
