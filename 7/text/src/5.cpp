#include<iostream>
using namespace std;
typedef const double *(*p_fun)(const double *, int);
const double * f1(const double ar[], int n);
int main()
{
    p_fun p1 = f1;
    int b[2] = {1,2};
    int * a = b;
    cout<<(*a)<<endl;
}
const double * f1(const double *ar, int n)
{
    return ar;
}