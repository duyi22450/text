#include <iostream>
#include"string1.h"
#include<cstdlib>
#include<ctime>

const int ArSize = 10;
const int MaxLen = 81;
using namespace std;

int main(int argc, char** argv)
{
    String name;
    cout << "Hi, what's your name?\n>> ";
    cin>>name;

    cout<<name<<", please enter up to "<<ArSize
        <<" short sayings <empty line to quit>:\n";
    String saylings[ArSize];
    char temp[MaxLen];
    int i;
    for(i =0; i<ArSize; i++)
    {
        cout<<i+1<<": ";
        cin.get(temp, MaxLen);
        while(cin && cin.get() != '\n')
            continue;
        if(!cin || temp[0] == '\0')
            break;
        else
            saylings[i] = temp;
    }
    int total = i;
    if(total > 0)
    {
        cout<<"Here are your sayings:\n";
        for(i = 0;i < total; i++)
        {
            cout<<saylings[i]<<endl;
        }
        String * shortest = &saylings[0];
        String * first = &saylings[0];
        for(i=1;i<total;i++)
        {
            if(saylings[i].length() < saylings->length())
                shortest = &saylings[i];
            if(saylings[i] < *first)
                first = &saylings[i];
        }
        cout<<"Shortest saying:\n"<<*shortest<<endl;
        cout<<"First alphabetically:\n"<<*first<<endl;
        srand(time(0));
        int choice = rand() % total;

        String * favorite = new String(saylings[choice]);
        cout<<"My favorite saying:\n"<<*favorite<<endl;
        delete favorite;
    }
    else
        cout<<"No much to say, eh?\n";
    cout<<"Bye.\n";
    return 0;
}
