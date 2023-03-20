#include<iostream>
#include"mytime0.h"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time Time::op(const Time & t)const
{
    Time sum;//sum是原体
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;//返回对象将创建对象的副本，这里返回的是sum的副本，函数结束后sum的原体会销毁
}

void Time::Show()const{
    std::cout<<hours <<" hours, "<<minutes<<" minutes";
}