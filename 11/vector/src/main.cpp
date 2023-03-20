#include <iostream>
#include<cstdlib>
#include<ctime>
#include"vector.h"
using namespace std;

int main(int argc, char** argv)
{
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector resuit(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout<<"Enter target distance (q to quit): ";
    while(cin>>target)
    {
        cout<<"Enter step lenth: ";
        if(!(cin>>dstep))
            break;

        while(resuit.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            resuit = resuit + step;
            steps++;
        }
        cout<<"After " <<steps <<" steps, the subject "
            "has the following location:\n";
        cout<<resuit<<endl;
        resuit.polar_mode();
        cout<<" or\n"<<resuit<<endl;
        cout<<"Average outward distance per step = "
        <<resuit.magval()/steps<<endl;
        steps = 0;
        resuit.reset(0.0, 0.0);
        cout<<"Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while(cin.get() != '\n')
        continue;
    return 0;
}
