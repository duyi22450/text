#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    char ch;
    int count = 0;
    cout<<"Enter characters; enter # to quit:\n";
    // cin>>ch;
    cin.get(ch);
    // while(ch != '#')
    while(cin.fail() == false)
    {
        cout<< ch;
        ++count;
        // cin>>ch;
        cin.get(ch);
    }
    cout << endl <<count <<" characters read\n";
    return 0;
}
