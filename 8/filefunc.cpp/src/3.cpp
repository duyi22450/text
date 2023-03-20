#include<iostream>
template<typename T>
void Swap(T &a, T &b);

struct job
{
    char name[40];
    double salary;
    int floor;
};
template<> void Swap<job>(job &j1, job &j2);
// template<typename T>
// void Swap(T *a, T *b, int n);

// void Show(int a[]);
void Show(job &j);
// const int Lim = 8;

int main()
{
    using namespace std;
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    int i = 10;
    int j = 20;
    cout<<"i, j = "<<i<<", "<<j<<".\n";
    cout<<"Using compiler-generated int swapper:\n";
    Swap(i, j);
    cout<<"Now i, j = "<<i<<", "<<j<<".\n";

    job sue = {"Susan Yaffee", 7300.60, 7};
    job sidney = {"Sidney Taffee", 78060.72, 9};
    cout<<"Before job swapping:\n";
    Show(sue);
    Show(sidney);
    Swap(sue, sidney);
    cout<<"After job swapping:\n";
    Show(sue);
    Show(sidney);

    // nt d1[Lim] = {0,7,0,4,1,7,7,6};
    // int d2[Lim] = {0, 7, 2, 0, 1, 9, 6, 9};
    // cout<<"Original arrays:\n";
    // Show(d1);
    // Show(d2);
    // Swap(d1,d2,Lim);
    // cout<<"Swapped arrays:\n";
    // Show(d1);
    // Show(d2);i
    // double x = 24.5;
    // double y = 81.7;
    // cout<<"x, y = "<<x<<", "<<y<<".\n";
    // cout<<"Using compiler generated double swapper:\n";
    // Swap(x, y);
    // cout<<"Now x, y = "<<x<<", "<<y<<".\n";
    return 0;
}

template<> void Swap<job>(job &a, job &b)
{
    double t1;
    int t2;
    t1 = a.salary;
    a.salary = b.salary;
    b.salary = t1;
    t2 = a.floor;
    a.floor = b.floor;
    b.floor = t2;
}

void Show(job &j)
{
    using namespace std;
    cout<<j.name<< ": $"<<j.salary
        <<" on floor "<<j.floor<<endl;
}
template<typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// template<typename T>
// void Swap(T *a, T *b, int n)
// {
//     T temp;
//     for(int i = 0; i < n; i++)
//     {
//         temp = a[i];
//         a[i] = b[i];
//         b[i] = temp;
//     }
// }

// void Show(int a[])
// {
//     using namespace std;
//     cout<<a[0]<<a[1]<<"/";
//     cout<<a[2]<<a[3]<<"/";
//     for(int i = 4; i<Lim;i++)
//         cout<<a[i];
//     cout<<endl;
// }