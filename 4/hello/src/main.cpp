#include <iostream>
#include<vector>
using namespace std;
int ii(int a, int b){
    return a+b;
}
int ii2(int a, int b){
    return a-b;
}
int ii3(int a, int b){
    return a*b;
}
int ii4(int a, int b){
    return a/b;
}
vector<decltype(ii) *> v{ii, ii2, ii3, ii4};
int main(int argc, char** argv)
{
    cout << v[0](1,2) << endl;
    cout << v[1](4,2) << endl;
    cout << v[2](1,2) << endl;
    cout << v[3](6,2) << endl;
    return 0;
}
