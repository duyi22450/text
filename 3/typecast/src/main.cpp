#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int auks, bats, coots;
    auks = 19.99 + 11.99;
    bats =(int)19.99 + (int)11.99;
    coots = int(19.99) + int(11.99);
    cout<<"auks = " << auks <<", bats = "<<bats;
    cout<<", coots = "<<coots<<endl;
    
    char ch ='z';
    cout<<"The code for "<<ch<<" is ";
    cout<<int(ch)<<endl;
    cout<<"Yes, the code is ";
    cout<<static_cast<int>(ch)<<endl;
    // cout << "hello world!" << endl;
    return 0;
}
