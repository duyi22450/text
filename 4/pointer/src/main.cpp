#include <iostream>

using namespace std;

int addition(int a, int b)
{return (a+b);}

int subtraction(int a, int b)
{return (a-b);}

int operation(int x, int y, int(*functocall)(int,int))
{
    int g;
    g=(*functocall)(x,y);
    return (g);
}
int main(int argc, char** argv)
{
    // int numbers[] = {10,20,30};
    // int x;
    // const int xp = 4;
    // // int *xp = &xp;
    // int y = 10;
    // const int * p = &y;
    // x = *p;
    // y = 2;
    // p = &x;
    // int x;
    // int *p1 =&x;
    // const int *p2 =&x;
    // int *const p3 =&x;
    // const int * const p4 =&x;
    
    // cout <<*(numbers+2)<< endl;
    int m,n;
    int(*minus)(int, int) = subtraction;

    m=operation(7, 5, addition);
    n=operation(20, m, minus);
    cout<<n;
    return 0;
}
