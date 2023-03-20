#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
namespace VECTOR
{
    class Vector
    {
    public:
        enum Mode{RECT, POL};
    private:
        double x;
        double y;
        double mag;
        double ang;
        Mode mode;

        void set_mag();
        void set_ang();
        void set_x();
        void set_y();
    public:
        Vector();
        Vector(double n1, double n2, Mode from = RECT);
        void reset(double n1, double n2, Mode from = RECT);
        ~Vector();
        double xval() const {return x;}
        double yval() const {return y;}
        double magval() const {return mag;}
        double angval() const {return ang;}
        void polar_mode();
        void rect_mode();

        Vector operator+(const Vector & b) const;//成员重载符号函数等于对象调用符号重载函数，传入附后右边的对象和隐式传入调用对象。
        Vector operator-(const Vector & b) const;
        Vector operator-() const;
        Vector operator*(double n) const;

        friend Vector operator*(double n, const Vector & a);
        friend std::ostream & operator<<(std::ostream & os, const Vector & v);
        //友元函数等于是正常的函数调用，并把符号两边的对象传入
    };
}
#endif