#include <iostream>
#include<string>
const int STKS = 4;
class Stock
{
    private:
    std::string company;
    int shares;
    double share_val;
    double total_val;
    void set_tot(){total_val = shares * share_val;}
    public:
    Stock();
    Stock(const std::string & co, long n = 0, double pr = 0.0);
    ~Stock();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show()const;
    const Stock & topval(const Stock & s) const;
};
// using namespace std;

int main(int argc, char** argv)
{
    // Stock st1 = Stock("NanoSmart", 12, 20.0);
    // Stock st2 = Stock("Boffo Objects", 200, 2.0);
    Stock stocks[STKS] ={
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
    };
    const Stock stt = stocks[0];//const对象
    stt.show()//const对象只能调用const成员函数
    // for(int st = 1; st< STKS; st++)
    //     stt = stt.topval(stocks[st]);
    // // stt = stt.topval(stocks[1]);
    // stt.buy(10, 3.1);
    // stt.show();
    return 0;
}


Stock::Stock()
{
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
    company = co;

    if(n < 0)
    {
        std::cout<<"Number of shares can't be negative; "
                <<company << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

Stock::~Stock()
{}
void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout<< "Number of shares purchased can't be negative. "
                <<"Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if(num < 0)
    {
        cout<<"Number of shares sold can't be negative. "
                <<"Transaction is aborted.\n";
    }
    else if(num > shares)
    {
        cout<<"You cna't sell more than you have! "
            <<"Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show() const
{
    using std::cout;
    using std::ios_base;
    ios_base::fmtflags orig =
        cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout<<"Company: "<<company
        <<" Shares: $"<<shares << '\n';
    cout<<" Share Price: $"<<share_val;
    cout.precision(2);
    cout<<" Total Worth: $"<<total_val<<'\n';
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}
const Stock & Stock::topval(const Stock & s) const
{
    if(s.total_val > total_val)
        return s;
    else
        return *this;
}