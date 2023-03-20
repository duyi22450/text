#include <iostream>
#include"stock20.h"
const int STKS = 4;
// using namespace std;

int main(int argc, char** argv)
{
    Stock stocks[STKS] ={
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
    };

    std::cout<<"Stock holdings:\n";
    int st;
    for(st = 0; st < STKS; st++)
        stocks[st].show();//非const对象，能调用所有成员方法
    const Stock * top = &stocks[0];//const对象指针,指向非const对象后，非const对象也只能调用const成员方法。
    for(st = 1; st< STKS; st++)
        top = &top->topval(stocks[st]);
    std::cout<<"\nMost valuable holding:\n";
    top->show();//const对象指针只能调用const成员方法
    // cout << "hello world!" << endl;
    return 0;
}
