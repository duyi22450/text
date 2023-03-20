#include <iostream>

using namespace std;

class screen
{//this指针是 *const 类型的指针，确保指向的地址不能改变
    public:
    //this指向的对象不能变，对象里的值能变，这里的返回值是非const的对象
    //非常量引用对象可以调用常量和非常量成员函数
    screen &display(ostream &os){do_display(os); return *this;}
    //这里的返回值是const&,第二个const改变this指针成 const *对象，返回的是const
    const screen &display(ostream &os) const {do_display(os); return *this;}
    
    private:
    //常量成员函数
    void do_display(ostream &os)const{os << "contents";}
};
int main(int argc, char** argv)
{
    cout << "hello world!!!!!" << endl;
    return 0;
}
